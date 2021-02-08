//이진 검색 트리 프로그램(헤더)
#ifndef ___BinTree
#define ___BinTree

#include "Member.h"

//노드
typedef struct __bnode {
	Member data;				//데이터
	struct __bnode *left;		//왼쪽 자식 노드에 대한 포인터
	struct __bnode *right;		//오른쪽 자식 노드에 대한 포인터
} BinNode;

//검색
BinNode *Search(BinNode *p, const Member *x);

//노드 삽입
BinNode *Add(BinNode *p, const Member *x);

//노드 삭제
int Remove(BinNode **root, const Member *x);

//모든 노드를 출력
void PrintTree(const BinNode *p);

//모든 노드 삭제
void FreeTree(BinNode *p);

//모든 노드를 키 값의 내림차순으로 출력
void PrintTreeReverse(const BinNode *p);

//최소 키 값을 가지는 노드를 검색
BinNode *GetMinNode(const BinNode *p);

//최대 키 값을 가지는 노드를 검색
BinNode *GetMaxNode(const BinNode *p);
#endif