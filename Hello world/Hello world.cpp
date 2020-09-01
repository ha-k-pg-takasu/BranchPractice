
#include <stdio.h>
#include <stdlib.h>

//Hello World表示関数
void DrawHelloWorld()
{
	printf("Hello World!\n");

	printf("ハローワールド！（webUI)\n);

	//今回は両方の変更を適用する
	printf("ハローワールド！（webUI）\n");
	printf("ハローワールド！（ローカル）\n");

}

int main()
{
	DrawHelloWorld();

	system("pause");
	return 0;
}
