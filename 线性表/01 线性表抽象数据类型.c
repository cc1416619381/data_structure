
ADT 线性表(List)

Data
	线性表的数据对象集和为{a1,...,an}，每个元素的类型均为DataType。

Operation
	InitList(*L)	// 初始化操作
	ListEmpty(L)	// 若线性表为空，返回true，否则返回false
	ClearList(*L)	// 将线性表清空
	GetElem(L, i, *e)	// 将线性表L的第i个元素的值返回给e
	LocateElem(L, e)	// 在线性表L中查找与给定值e相等的元素，如果查找成功，返回该元素在表中序号；否则，返回0表示失败
	ListInsert(*L, i, e)	// 在线性表L中第i个位置插入新元素
	ListDelete(*L, i, *e)	// 删除线性表L中第i个位置元素，并用e返回其值
	ListLength(L)	// 返回线性表L的元素个数

endADT
