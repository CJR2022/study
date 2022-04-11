
//학번 : 2022041015
//이름 : 최정륜

//(3개의 수 중 큰 수 출력)
//시용자로부터 3개의 정수를 입력 받아, 
//가장 큰 수를 출력하는 프로그램을 작성하여 보세요.
//조건 연산자(삼항 연산자) 사용해보세요.
//조건문(if)으로 작성 할 수 있는경우, if문으로 작성하셔도 됩니다. 
//조건 연산자 or if문 택일 
#include <stdio.h>

int main(void) {
  int tmp[3], max=0;
  printf("정수를 3개 입력해주세요 : ");
  scanf("%d %d %d", &tmp[0], &tmp[1], &tmp[2]);
  for(int i=0;i<3;i++)
    {
      if(max<tmp[i])
        max = tmp[i];
    }
  printf("%d", max);
  return 0;
}