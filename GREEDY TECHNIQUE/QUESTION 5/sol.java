import java.util.*;

public class sol {
    public static void main(String args[]){
        Scanner scr = new Scanner(System.in);
        int n = scr.nextInt();
        ArrayList<Integer> ar = new ArrayList<Integer>(n);
        for(int i=0;i<n;i++)
        {
            ar.add(scr.nextInt());
        }
        int neg = -1;
        Collections.sort(ar, Collections.reverseOrder());
        for(int i=0;i<n;i++)
        {
            if(ar.get(i)<0)
            {
                neg = i;
                break;
            }
        }
        int prod1 = ar.get(0)*ar.get(1)*ar.get(2)*ar.get(3)*ar.get(4);
        int prod2 = ar.get(0)*ar.get(1)*ar.get(2)*ar.get(n-1)*ar.get(n-2);
        int prod3 = ar.get(0)*ar.get(n-1)*ar.get(n-2)*ar.get(n-3)*ar.get(n-4);
        int ans = (neg==-1)?prod1:(neg>=n-3)?Math.max(prod1,prod2):(neg>=n-4)?Math.max(prod1,Math.max(prod1,prod2)):0;
        System.out.println(ans);
    }
}