//���� �˻� Ʈ�� ���α׷�(���)
#ifndef ___BinTree
#define ___BinTree

#include "Member.h"

//���
typedef struct __bnode {
	Member data;				//������
	struct __bnode *left;		//���� �ڽ� ��忡 ���� ������
	struct __bnode *right;		//������ �ڽ� ��忡 ���� ������
} BinNode;

//�˻�
BinNode *Search(BinNode *p, const Member *x);

//��� ����
BinNode *Add(BinNode *p, const Member *x);

//��� ����
int Remove(BinNode **root, const Member *x);

//��� ��带 ���
void PrintTree(const BinNode *p);

//��� ��� ����
void FreeTree(BinNode *p);

//��� ��带 Ű ���� ������������ ���
void PrintTreeReverse(const BinNode *p);

//�ּ� Ű ���� ������ ��带 �˻�
BinNode *GetMinNode(const BinNode *p);

//�ִ� Ű ���� ������ ��带 �˻�
BinNode *GetMaxNode(const BinNode *p);
#endif