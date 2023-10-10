#include "dragonbox/include/dragonbox/dragonbox_to_chars.h"
#include "test.h"

char *dtoa_dragonbox(double x, char *const buffer)
{
	jkj::dragonbox::to_chars(x, buffer, jkj::dragonbox::policy::cache::full);
	return buffer;
	
}

char *dtoa_dragonbox_comp(double x, char *const buffer)
{
	jkj::dragonbox::to_chars(x, buffer, jkj::dragonbox::policy::cache::compact);
	return buffer;
}

REGISTER_TEST(dragonbox);
REGISTER_TEST(dragonbox_comp);