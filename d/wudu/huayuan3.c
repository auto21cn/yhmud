inherit ROOM;

void create()
{
        set("short", "��԰");
        set("long", @LONG
�����Ǹ���԰��һ���ļ��������Ÿ�������Ļ��ݣ��������·�
���߲����޵Ĺ�ԡ���԰��һƬ���ţ���������һֻ�۷��������衣
�Ա���һ��Сͤ�ӡ�
LONG);
        set("outdoors", "wudujiao");

        set("exits", ([
                "east" : __DIR__"huating3",
                "south" : __DIR__"huayuan1",
        ]));

        setup();
        //replace_program(ROOM);
}