// tianmojue.c

inherit SKILL;

#include <ansi.h>

void create()
{
    seteuid(getuid());
}

string type() { return "knowledge"; }

int practice_skill(object me)
{
    return notify_fail("天魔诀只能靠学(learn)来提高。\n");
}
void skill_improved(object me)
{
    tell_object(me, HIR "你感觉自己内心充满了杀戮的欲望！\n" NOR);
    me->add("shen", -200);
}
