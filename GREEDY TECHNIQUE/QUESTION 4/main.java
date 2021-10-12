class Main{
public static void kthNonDivisible(int N,
								int K)
{
	int L = 1;
	int H = Integer.MAX_VALUE;
	int ans = 0;
	while (L <= H)
	{
		int mid = (L + H) / 2;
		int sol = mid - mid / N;
		if (sol > K)
		{
			H = mid - 1;
		}
		else if (sol < K)
		{
			L = mid + 1;
		}
		else
		{
			ans = mid;
			H = mid - 1;
		}
	}
	System.out.print(ans);
}
public static void main(String[] args)
{
	int N = 4;
	int K = 12;
	kthNonDivisible(N, K);
}
}

