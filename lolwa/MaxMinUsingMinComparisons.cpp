//Maximum and minimum of an array using minimum number of comparisons
#include<iostream>


	struct minmax
	{
	int min;
	int max;
	};

	// Q Why we are using struct here. 
	struct minmax MnComparisons(int ar[],int length)
	{
		int i;
		struct minmax obj;
		if (length==0)
		{
			obj.min = 0;
			obj.max = 0;
		}
		else if(length == 1)
		{
			obj.min = ar[0];
			obj.max = ar[0];
		}
		else
		{
			if(length%2==0)
			{
				if(ar[0] > ar [1])
				{
					obj.min = ar[1];
					obj.max = ar[0];
				}
				else
				{
					obj.min = ar[0];
					obj.max = ar[1];
				}
				i=2;
			}
			else
			{
				obj.min = ar[0];
				obj.max = ar[0];
				i=1;
			}
				while(i<length-1)
				{
					if(ar[i]>ar[i+1])
					{
						if(obj.max < ar[i])
							obj.max = ar[i];
						if(obj.min > ar[i+1])
							obj.min = ar[i+1];
					}
					else
					{
						if(obj.max < ar[i+1])
							obj.max = ar[i+1];
						if(obj.min > ar[i])
							obj.min = ar[i];
					}
					i=i+2;
				}
			}
		return obj;
		}
//	int main()
//{
//	minmax value;
//	int ar[]={4,1,4,7,9,3,10};
//	int length = sizeof(ar)/sizeof(ar[0]);
//	value = MnComparisons(ar,length);
//	std::cout<<"Max is "<< value.max;
//	std::cout<<"\n";
//	std::cout<<"Min is "<<value.min;
//	getchar();
//	return 0;
//}