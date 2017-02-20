import java.util.*;
class NOCODING {
	public static void main(String args[])
	{
		Scanner in= new Scanner(System.in);
		int t,ascii=0,count=0,i,buff=0;
		String s;
		t=in.nextInt();
		//System.out.println(t);
		while(t>0)
		{
			count=0;
			s=in.next();
			//System.out.println(s.length());
			buff=(int)s.charAt(0);
			count=2;	//load and print first char
			for(i=1;i<s.length() && count<=11*s.length();i++)
			{
				ascii=(int)s.charAt(i);
				if(ascii>buff)
				{
					count+=ascii-buff+1;
					buff=ascii;
				}
				else if(ascii==buff)
				{
					count++;
				}
				else
				{
					count+=26-(buff-ascii)+1;
					buff=ascii;
				}
				
			}
			//System.out.println(count);
			if(count<=11*s.length())
			{
				System.out.println("YES");
			}
			else
			{
				System.out.println("NO");
			}
			t--;
		}
		
		in.close();
	}
}
