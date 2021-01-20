// 实现两个线性表集和A与B的并集操作

// 将所有的在线性表Lb中但不在La中的数据元素插入到La中

void unionL(List* La, List Lb)
{
	int La_len, Lb_len, i;
	ElemTpye e;  // 线性表中数据元素类型

	La_len = ListLength(La);
	Lb_len = ListLength(Lb);

	for (i = 0; i < Lb_len; i++)
	{
		GetElem(Lb, i, &e);
		if (!LocateElem(La, e))
		{
			ListInsert(&L, La_len++, e);
		}
	}
}