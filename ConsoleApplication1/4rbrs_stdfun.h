
namespace Frbrs_stdfun{
	int getMoM(int *arr, int count, bool MoM, int M){
		if (count - 1>0)
		{
			count -= 1;
			if (MoM)
			{
				M = M > arr[count] ? M : arr[count];
			}
			else
			{
				M = M < arr[count] ? M : arr[count];
			}
			return getMoM(arr, count, MoM, M);
		}
		else
		{
			return M;
		}
	}
}
