inherit ROOM;

void create()
{
	set("short", "�����");
	set("long", @LONG
����һ����������ʯ��ֵ���������ͷ���졣������һ
����ʮ�ֽֿڡ�����������������㳡���������˳ƹ�������
���ĸ�ۡ���ţ���ʱ�����˴��������������������һ�ҵ��̣�
��˵���泣����������Ķ�����
LONG );
        set("outdoors", "xiangyang");
	set("no_clean_up", 0);

	set("exits", ([
		"east"  : __DIR__"guangchang",
		"west"  : __DIR__"westjie2",
		"south" : __DIR__"dangpu",
		"north" : "/d/wuguan/guofu_gate",
	]));
	set("objects", ([
		__DIR__"npc/poorman" : 1,
	]));
	setup();
	replace_program(ROOM);
}
