import java.util.*;
import java.io.*;
import java.text.DecimalFormat;
public class Question1{
    public static void main(String[] args) {
        Scanner s1=new Scanner(System.in);
        String k=s1.nextLine();
        ArrayList<Integer> list=new ArrayList<>();
        StringTokenizer t=new StringTokenizer(k);
        while(t.hasMoreTokens())
        {
            list.add(Integer.parseInt(t.nextToken()));
        }
        double max=compute(list);
        System.out.printf("%.2f",max);
    }
    public static double compute(ArrayList<Integer> a)
    {
       int n=a.size();
       if(n==0)
       {
           return 0;
       }
       else if(n==1)
       {
            return a.get(0);
       }
       else{
           int b=a.get(0);
           int c=a.get(1);
           int b1=1;
           int c1=1;
           for(int i=2;i<n;i++)
           {
               int val=a.get(i);
               
               double t1=((double)(val+b)/(b1+1))+((double)c/c1);
               double t2=((double)(val+c)/(c1+1))+((double)b/b1);
                if(t1>=t2)
                {
                    b=b+val;
                    b1++;
                }
                else{
                    c=c+val;
                    c1++;
                }
           }
           return (((double)b/b1)+((double)c/c1));
       }
    }
}