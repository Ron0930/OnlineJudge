#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	char a[2*n-1][2*n-1];
	int k=2*n-1,t=0;
	//�����е�Ԫ�ض���ʼ��Ϊ' '
	for(j = 0; j < 2*n-1; j++){
		for(i = 0; i < 2*n-1; i++){
			a[i][j] = ' ';
		}
	}
	//��߲���
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
	//�ұ߲���
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
	//��ӡ
	for(i = 0; i < 2*n-1; i++){		
		for(j = 0; j < 2*n-1; j++){
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
