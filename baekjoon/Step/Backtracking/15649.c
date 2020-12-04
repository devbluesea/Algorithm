#include <stdio.h>
#define swap(x,y,t) (t = x, x = y, y = t)

void print(int *res, int tn)
{
	int i;

	for (i = 0 ; i < tn ; i++)
	{
		printf("%d", res[i]);
		if (i != tn - 1)
			printf(" ");
	}
	printf("\n");
}

void rep(int tn, int depth, int *data, int *res)
{
	int i;
	int j;

	for (i = 0 ; i < tn ; i++)
	{
		res[depth] = data[i];
		if (depth == tn)
		{
			print(res, tn);
			return ;
		}
		depth++;
		rep(tn, depth, data, res);
		depth--;
	}
}
void permutation(char arr[], int i, int n){
    int j, temp;

    if (i == n){
        for(j=0; j<=n; j++) printf("%c", arr[j]);
        printf("\n");
        return;
    }
    for(j=i; j<=n; j++){
        swap(arr[i], arr[j], temp);
        permutation(arr, i+1, n);
        swap(arr[i], arr[j], temp);
    }
}

int main(void)
{
	int data[] = {1,2,3,4};
	char arr[] = {'1','2','3','4'};
	int tn;
	int depth;
	int i;
	int temp;

	tn = sizeof(data)/sizeof(int);
	int res[tn];
	depth = 0;
	permutation(arr, 0, 3);
//	rep(tn, depth, data, res);
}
