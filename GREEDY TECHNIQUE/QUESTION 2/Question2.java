import java.util.*;
import java.io.*;
import java.text.DecimalFormat;
public class Question2{
    public static void main(String[] args) {
        Scanner s1=new Scanner(System.in);
        String k=s1.nextLine();
        System.out.println(compute(k));
    }
    public static String compute(String k)
    {
        int n=k.length();
        for(int i=0;i<n; )
        {
            if(i<n-2 && k.substring(i, i+3).equals("899"))
            {
                i=i+3;
            }
            else if( i< n-1 && k.substring(i,i+2).equals("89"))
            {
                i=i+2;
            }
            else if( k.charAt(i)=='8')
            {
                i=i+1;
            }
            else{
                return "NO";
            }
        }
        return "YES";
    }
}