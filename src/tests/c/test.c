#include "test.h"

extern SUITE(emplace_message_suite);
extern SUITE(emplace_uint_suite);
extern SUITE(emplace_int_suite);
extern SUITE(emplace_float_suite);
extern SUITE(pub_sub_string_suite);
extern SUITE(framing_outgoing_suite);
extern SUITE(framing_incoming_suite);
extern SUITE(pub_sub_uint_suite);
extern SUITE(pub_sub_int_suite);
extern SUITE(pub_sub_float_suite);
extern SUITE(update_message_suite);
extern SUITE(update_uint_suite);
extern SUITE(update_int_suite);
extern SUITE(update_float_suite);
extern SUITE(match_suite);
extern SUITE(dictionnary_suite);
extern SUITE(attach_suite);

GREATEST_MAIN_DEFS();

int main(int argc, char **argv) {
    GREATEST_MAIN_BEGIN();

    RUN_SUITE(emplace_message_suite);
    RUN_SUITE(emplace_uint_suite);
    RUN_SUITE(emplace_int_suite);
    RUN_SUITE(emplace_float_suite);
    RUN_SUITE(update_message_suite);
    RUN_SUITE(update_uint_suite);
    RUN_SUITE(update_int_suite);
    RUN_SUITE(update_float_suite);
    RUN_SUITE(framing_outgoing_suite);
    RUN_SUITE(framing_incoming_suite);
    RUN_SUITE(pub_sub_string_suite);
    RUN_SUITE(pub_sub_uint_suite);
    RUN_SUITE(pub_sub_int_suite);
    RUN_SUITE(pub_sub_float_suite);
    RUN_SUITE(match_suite);
    RUN_SUITE(dictionnary_suite);
    RUN_SUITE(attach_suite);

    GREATEST_MAIN_END();
}
