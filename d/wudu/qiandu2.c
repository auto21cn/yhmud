#include <ansi.h> 
inherit ROOM;
string* npcs = ({
        "/clone/worm/shishixie",
        "/clone/worm/tieguxie",
        "/clone/worm/heiguafu",
        "/clone/worm/jinxianwugong",
        "/clone/worm/baizuwugong",
        "/clone/worm/datouwugong",
        "/clone/worm/huibeixie",
});

void create()
{
        set("short", HIR "ǧ����" NOR);
        set("long", @LONG
������һ����Ȼ�γɵ�ʯ�������������󡣶���������������
��ʯ����ʱ���������δ��ˮ�������ڶ��У�����������ʪ�����Ժ�
Ȼ����һ�����С���������
LONG);

        set("exits", ([
                "south" : __DIR__"qiandu1",
                "north" : __DIR__"qiandu3",
                "west" : __DIR__"qiandu4",
                "east" : __DIR__"qiandu5",
        ]));
        set("objects", ([
                npcs[random(sizeof(npcs))] : 1,
                npcs[random(sizeof(npcs))] : 1,
                npcs[random(sizeof(npcs))] : 1,
                npcs[random(sizeof(npcs))] : 1,
        ]));

        setup();
        //replace_program(ROOM);
}