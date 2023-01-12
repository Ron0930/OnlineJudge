#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	char a[2*n-1][2*n-1];
	int k=2*n-1,t=0;
	//给所有的元素都初始化为' '
	for(j = 0; j < 2*n-1; j++){
		for(i = 0; i < 2*n-1; i++){
			a[i][j] = ' ';
		}
	}
	//左边部分
	for(j = 0; j < n; j++){
		for(i = t; i < k; i++){
			a[i][j] = '*';
		}
		if(t<n-1){
			k--;
			t++;
		}
		else{
			break;
		}
	}
	//右边部分
	for(j = n; j < 2*n-1; j++){		
		if(k<2*n-1){
			k++;
			t--;
		}
		else{
			break;
		}
		for(i = t; i < k; i++){
			a[i][j] = '*';
		}
	}
	//打印
	for(i = 0; i < 2*n-1; i++){		
		for(j = 0; j < 2*n-1; j++){
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
