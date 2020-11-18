#include "ContactBook.h"

void ContactInit(ContactBook* pcb)
{
	pcb->contactArray = (Contact*)malloc(sizeof(Contact)*CTARRAY_INIT_SIZE);
	if (pcb->contactArray == NULL)
	{
		printf("申请内存失败\n");
		exit(-1);
	}
	memset(pcb->contactArray, 0, sizeof(Contact)*CTARRAY_INIT_SIZE);
	pcb->size = 0;
	pcb->capcity = CTARRAY_INIT_SIZE;
}

void ContactAdd(ContactBook* pcb, Contact ct)
{
	assert(pcb);
	if (pcb->size >= pcb->capcity)
	{
		int newcapacity = pcb->capcity * 2;
		pcb->contactArray = realloc(pcb->contactArray, newcapacity*sizeof(Contact));
		if (pcb->contactArray == NULL)
		{
			printf("申请内存失败\n");
			exit(-1);
		}
		pcb->capcity = newcapacity;
	}

	/*strcpy(pcb->contactArray[pcb->size].name, ct.name);
	strcpy(pcb->contactArray[pcb->size].addr, ct.addr);
	strcpy(pcb->contactArray[pcb->size].tel, ct.tel);
	pcb->contactArray[pcb->size].age = ct.age;*/
	memcpy(pcb->contactArray + pcb->size, &ct, sizeof(Contact));

	pcb->size++;
}

Contact* ContactSearch(ContactBook* pcb, const char* name)
{
	assert(pcb);

	for (int i = 0; i < pcb->size; ++i)
	{
		if (strcmp(pcb->contactArray[i].name, name) == 0)
		{
			return &(pcb->contactArray[i]);
		}

		if (strstr(pcb->contactArray[i].name, name))
		{
			return &(pcb->contactArray[i]);
		}
	}

	return NULL;
}

void ContactDel(ContactBook* pcb, const char* name)
{
	for (int i = 0; i < pcb->size; ++i)
	{
		if (strcmp(pcb->contactArray[i].name, name) == 0)
		{
			memmove(pcb->contactArray + i, pcb->contactArray + i + 1, sizeof(Contact)*(pcb->size - (i + 1)));

			memset(pcb->contactArray + pcb->size - 1, 0, sizeof(Contact));
			break;
		}
	}
	pcb->size--;
}

void ContactUpdateTel(ContactBook* pcb, char* name, char* tel)
{
	Contact* pct = ContactSearch(pcb, name);
	if (pct == NULL)
	{
		printf("输入的人名不存在,无法更新\n");
	}

	strcpy(pct->tel, tel);
}

void ContactUpdateAge(ContactBook* pcb, char* name, short age)
{
	Contact* pct = ContactSearch(pcb, name);
	if (pct == NULL)
	{
		printf("输入的人名不存在,无法更新\n");
	}
	pct->age = age;
}

void ContactUpdateAddr(ContactBook* pcb, char* name, char* addr)
{
	Contact* pct = ContactSearch(pcb, name);
	if (pct == NULL)
	{
		printf("输入的人名不存在,无法更新\n");
	}
	strcmp(pct->addr, addr);
}

void ContactBookPrint(ContactBook* pcb)
{
	for (int i = 0; i < pcb->size; ++i)
	{
		printf("姓名：%s\n", pcb->contactArray[i].name);
		printf("年龄：%d\n", pcb->contactArray[i].age);
		printf("电话：%s\n", pcb->contactArray[i].tel);
		printf("地址：%s\n", pcb->contactArray[i].addr);
		printf("\n\n");
	}
}

void ContactBookSave(ContactBook* pcb)
{
	FILE* fout = fopen("contact_book.txt", "w");
	for (int i = 0; i < pcb->size; ++i)
	{
		fprintf(fout, "%s %d %s %s\n", pcb->contactArray[i].addr, pcb->contactArray[i].age, pcb->contactArray[i].name, pcb->contactArray[i].tel);
	}

	fclose(fout);
}

void ContactBookLoad(ContactBook* pcb)
{
	FILE* fin = fopen("contact_book.txt", "r");

	Contact ct;
	int ret = fscanf(fin, "%s %d %s %s\n", ct.addr, &ct.age, ct.name, ct.tel);
	while (ret != EOF)
	{
		ContactAdd(pcb, ct);
		ret = fscanf(fin, "%s %d %s %s\n", ct.addr, &ct.age, ct.name, ct.tel);
	}

	fclose(fin);
}