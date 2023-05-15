#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>\

/*
Q3. 파일 복사 프로그램 만들기
	복사할 파일명과 복사 후 생성되는 파일명을 입력 받아서 파일의 내용을 복사하는 프로그램 작성.
	단, txt 파일 뿐만 아니라 이미지 파일 등.. 모든 종류의 파일에 다 동일하게 적용할 수 있어야 한다.
	복사 진행 과정을 백분율로 화면에 표시해주도록 하고, 한번에 n바이트씩 복사하도록 한다.
	ex) 4 바이트
		원본 파일 : source.txt
		대상 파일 : dest.txt
*/