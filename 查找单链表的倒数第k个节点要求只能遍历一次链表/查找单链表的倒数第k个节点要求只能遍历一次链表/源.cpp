void DelNotTailNode(PSListNode pos)
{
	PSListNode pNode = NULL;
	assert(pos);
	if (NULL == pos->pNextNode)
	{
		return;
	}

	else
	{
		DataType temp = 0;
		//����pos��pos->pNextNode�����ݣ��൱�ڽ�������������λ�ã���ʹ����ת��Ϊɾ��posָ��Ľ�����һ�����
		temp = pos->data;
		pos->data = pos->pNextNode->data;
		pos->pNextNode->data = temp;
		pNode = pos->pNextNode;
		pos->pNextNode = pos->pNextNode->pNextNode;
		free(pNode);
		pNode = NULL;
	}
}