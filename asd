try/main_test_proto.c:29:6: warning: no previous prototype for function 'test_s_01' [-Wmissing-prototypes]
void    test_s_01(void)
        ^
try/main_test_proto.c:43:6: warning: no previous prototype for function 'test_s_02' [-Wmissing-prototypes]
void    test_s_02(void)
        ^
try/main_test_proto.c:57:6: warning: no previous prototype for function 'test_s_03' [-Wmissing-prototypes]
void    test_s_03(void)
        ^
try/main_test_proto.c:71:6: warning: no previous prototype for function 'test_s_04' [-Wmissing-prototypes]
void    test_s_04(void)
        ^
try/main_test_proto.c:85:6: warning: no previous prototype for function 'test_s_05' [-Wmissing-prototypes]
void    test_s_05(void)
        ^
try/main_test_proto.c:99:6: warning: no previous prototype for function 'test_s_06' [-Wmissing-prototypes]
void    test_s_06(void)
        ^
try/main_test_proto.c:113:6: warning: no previous prototype for function 'test_s_07' [-Wmissing-prototypes]
void    test_s_07(void)
        ^
try/main_test_proto.c:127:6: warning: no previous prototype for function 'test_s_08' [-Wmissing-prototypes]
void    test_s_08(void)
        ^
try/main_test_proto.c:141:6: warning: no previous prototype for function 'test_s_09' [-Wmissing-prototypes]
void    test_s_09(void)
        ^
try/main_test_proto.c:155:6: warning: no previous prototype for function 'test_s_10' [-Wmissing-prototypes]
void    test_s_10(void)
        ^
try/main_test_proto.c:169:6: warning: no previous prototype for function 'test_s_11' [-Wmissing-prototypes]
void    test_s_11(void)
        ^
try/main_test_proto.c:183:6: warning: no previous prototype for function 'test_s_12' [-Wmissing-prototypes]
void    test_s_12(void)
        ^
try/main_test_proto.c:197:6: warning: no previous prototype for function 'test_s_13' [-Wmissing-prototypes]
void    test_s_13(void)
        ^
try/main_test_proto.c:211:6: warning: no previous prototype for function 'test_s_14' [-Wmissing-prototypes]
void    test_s_14(void)
        ^
try/main_test_proto.c:283:25: warning: 'S' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %S\n", L"chewing gum<U+1F917> <U+1F917> <U+1F917> <U+1F917>\0");
                              ~^
try/main_test_proto.c:276:6: warning: no previous prototype for function 'test_ls_01' [-Wmissing-prototypes]
void    test_ls_01(void)
        ^
try/main_test_proto.c:298:27: warning: 'S' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %45S\n", L"chewing gum<U+1F917> <U+1F917> <U+1F917> <U+1F917>\0");
                              ~~~^
try/main_test_proto.c:291:6: warning: no previous prototype for function 'test_ls_02' [-Wmissing-prototypes]
void    test_ls_02(void)
        ^
try/main_test_proto.c:313:26: warning: 'S' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %5S\n", L"<U+1F917>");
                              ~~^
try/main_test_proto.c:306:6: warning: no previous prototype for function 'test_ls_03' [-Wmissing-prototypes]
void    test_ls_03(void)
        ^
try/main_test_proto.c:328:26: warning: 'S' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %5S\n", L"©");
                              ~~^
try/main_test_proto.c:321:6: warning: no previous prototype for function 'test_ls_04' [-Wmissing-prototypes]
void    test_ls_04(void)
        ^
try/main_test_proto.c:343:26: warning: 'S' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %5S\n", L"ᚙ");
                              ~~^
try/main_test_proto.c:336:6: warning: no previous prototype for function 'test_ls_05' [-Wmissing-prototypes]
void    test_ls_05(void)
        ^
try/main_test_proto.c:358:25: warning: 'S' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %S\n", L"123456<U+1F917>");
                              ~^
try/main_test_proto.c:351:6: warning: no previous prototype for function 'test_ls_06' [-Wmissing-prototypes]
void    test_ls_06(void)
        ^
try/main_test_proto.c:373:25: warning: 'S' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %S\n", L"<U+1F917><U+1F917><U+1F917><U+1F917>");
                              ~^
try/main_test_proto.c:366:6: warning: no previous prototype for function 'test_ls_07' [-Wmissing-prototypes]
void    test_ls_07(void)
        ^
try/main_test_proto.c:388:25: warning: 'S' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %S\n", L"<U+1F917><U+1F917>");
                              ~^
try/main_test_proto.c:381:6: warning: no previous prototype for function 'test_ls_08' [-Wmissing-prototypes]
void    test_ls_08(void)
        ^
try/main_test_proto.c:403:26: warning: 'S' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %2S\n", L"<U+1F917><U+1F917><U+1F917><U+1F917>");
                              ~~^
try/main_test_proto.c:396:6: warning: no previous prototype for function 'test_ls_09' [-Wmissing-prototypes]
void    test_ls_09(void)
        ^
try/main_test_proto.c:418:26: warning: 'S' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %2S\n", NULL);
                              ~~^
try/main_test_proto.c:418:32: warning: format specifies type 'wchar_t *' (aka 'int *') but the argument has type 'void *' [-Wformat]
        ret1 = printf("orig : %2S\n", NULL);
                              ~~~     ^~~~
/usr/include/sys/_types/_null.h:29:15: note: expanded from macro 'NULL'
#define NULL  __DARWIN_NULL
              ^~~~~~~~~~~~~
/usr/include/sys/_types.h:52:23: note: expanded from macro '__DARWIN_NULL'
#define __DARWIN_NULL ((void *)0)
                      ^~~~~~~~~~~
try/main_test_proto.c:411:6: warning: no previous prototype for function 'test_ls_10' [-Wmissing-prototypes]
void    test_ls_10(void)
        ^
try/main_test_proto.c:429:6: warning: no previous prototype for function 'test_d_01' [-Wmissing-prototypes]
void    test_d_01(void)
        ^
try/main_test_proto.c:443:6: warning: no previous prototype for function 'test_d_02' [-Wmissing-prototypes]
void    test_d_02(void)
        ^
try/main_test_proto.c:457:6: warning: no previous prototype for function 'test_d_03' [-Wmissing-prototypes]
void    test_d_03(void)
        ^
try/main_test_proto.c:471:6: warning: no previous prototype for function 'test_d_04' [-Wmissing-prototypes]
void    test_d_04(void)
        ^
try/main_test_proto.c:485:6: warning: no previous prototype for function 'test_d_05' [-Wmissing-prototypes]
void    test_d_05(void)
        ^
try/main_test_proto.c:500:6: warning: no previous prototype for function 'test_d_06' [-Wmissing-prototypes]
void    test_d_06(void)
        ^
try/main_test_proto.c:514:6: warning: no previous prototype for function 'test_d_07' [-Wmissing-prototypes]
void    test_d_07(void)
        ^
try/main_test_proto.c:528:6: warning: no previous prototype for function 'test_d_08' [-Wmissing-prototypes]
void    test_d_08(void)
        ^
try/main_test_proto.c:543:6: warning: no previous prototype for function 'test_d_09' [-Wmissing-prototypes]
void    test_d_09(void)
        ^
try/main_test_proto.c:558:6: warning: no previous prototype for function 'test_d_10' [-Wmissing-prototypes]
void    test_d_10(void)
        ^
try/main_test_proto.c:573:6: warning: no previous prototype for function 'test_d_11' [-Wmissing-prototypes]
void    test_d_11(void)
        ^
try/main_test_proto.c:588:6: warning: no previous prototype for function 'test_d_12' [-Wmissing-prototypes]
void    test_d_12(void)
        ^
try/main_test_proto.c:604:6: warning: no previous prototype for function 'test_d_13' [-Wmissing-prototypes]
void    test_d_13(void)
        ^
try/main_test_proto.c:619:6: warning: no previous prototype for function 'test_d_14' [-Wmissing-prototypes]
void    test_d_14(void)
        ^
try/main_test_proto.c:633:6: warning: no previous prototype for function 'test_d_15' [-Wmissing-prototypes]
void    test_d_15(void)
        ^
try/main_test_proto.c:648:6: warning: no previous prototype for function 'test_d_16' [-Wmissing-prototypes]
void    test_d_16(void)
        ^
try/main_test_proto.c:663:6: warning: no previous prototype for function 'test_d_17' [-Wmissing-prototypes]
void    test_d_17(void)
        ^
try/main_test_proto.c:678:6: warning: no previous prototype for function 'test_d_18' [-Wmissing-prototypes]
void    test_d_18(void)
        ^
try/main_test_proto.c:693:6: warning: no previous prototype for function 'test_d_19' [-Wmissing-prototypes]
void    test_d_19(void)
        ^
try/main_test_proto.c:708:6: warning: no previous prototype for function 'test_d_20' [-Wmissing-prototypes]
void    test_d_20(void)
        ^
try/main_test_proto.c:723:6: warning: no previous prototype for function 'test_d_21' [-Wmissing-prototypes]
void    test_d_21(void)
        ^
try/main_test_proto.c:738:6: warning: no previous prototype for function 'test_d_22' [-Wmissing-prototypes]
void    test_d_22(void)
        ^
try/main_test_proto.c:754:6: warning: no previous prototype for function 'test_d_23' [-Wmissing-prototypes]
void    test_d_23(void)
        ^
try/main_test_proto.c:768:6: warning: no previous prototype for function 'test_d_24' [-Wmissing-prototypes]
void    test_d_24(void)
        ^
try/main_test_proto.c:784:6: warning: no previous prototype for function 'test_d_25' [-Wmissing-prototypes]
void    test_d_25(void)
        ^
try/main_test_proto.c:799:6: warning: no previous prototype for function 'test_d_26' [-Wmissing-prototypes]
void    test_d_26(void)
        ^
try/main_test_proto.c:813:6: warning: no previous prototype for function 'test_d_27' [-Wmissing-prototypes]
void    test_d_27(void)
        ^
try/main_test_proto.c:827:6: warning: no previous prototype for function 'test_d_28' [-Wmissing-prototypes]
void    test_d_28(void)
        ^
try/main_test_proto.c:842:6: warning: no previous prototype for function 'test_d_29' [-Wmissing-prototypes]
void    test_d_29(void)
        ^
try/main_test_proto.c:857:6: warning: no previous prototype for function 'test_d_30' [-Wmissing-prototypes]
void    test_d_30(void)
        ^
try/main_test_proto.c:872:6: warning: no previous prototype for function 'test_d_31' [-Wmissing-prototypes]
void    test_d_31(void)
        ^
try/main_test_proto.c:887:6: warning: no previous prototype for function 'test_d_32' [-Wmissing-prototypes]
void    test_d_32(void)
        ^
try/main_test_proto.c:902:6: warning: no previous prototype for function 'test_d_33' [-Wmissing-prototypes]
void    test_d_33(void)
        ^
try/main_test_proto.c:917:6: warning: no previous prototype for function 'test_d_34' [-Wmissing-prototypes]
void    test_d_34(void)
        ^
try/main_test_proto.c:932:6: warning: no previous prototype for function 'test_d_35' [-Wmissing-prototypes]
void    test_d_35(void)
        ^
try/main_test_proto.c:947:6: warning: no previous prototype for function 'test_d_36' [-Wmissing-prototypes]
void    test_d_36(void)
        ^
try/main_test_proto.c:969:25: warning: flag ' ' is ignored when flag '+' is present [-Wformat]
        ret1 = printf("orig : % +d\n", a);
                              ~^~~
try/main_test_proto.c:962:6: warning: no previous prototype for function 'test_d_37' [-Wmissing-prototypes]
void    test_d_37(void)
        ^
try/main_test_proto.c:977:6: warning: no previous prototype for function 'test_d_38' [-Wmissing-prototypes]
void    test_d_38(void)
        ^
try/main_test_proto.c:992:6: warning: no previous prototype for function 'test_d_39' [-Wmissing-prototypes]
void    test_d_39(void)
        ^
try/main_test_proto.c:1007:6: warning: no previous prototype for function 'test_d_40' [-Wmissing-prototypes]
void    test_d_40(void)
        ^
try/main_test_proto.c:1032:28: warning: invalid conversion specifier 'h' [-Wformat-invalid-specifier]
        ret1 = printf("orig : %zhd\n", 4294967296);
                              ~~^
try/main_test_proto.c:1026:8: warning: no previous prototype for function 'test_d_41' [-Wmissing-prototypes]
  void  test_d_41(void)
        ^
try/main_test_proto.c:1048:25: warning: 'D' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %D\n", 42);
                              ~^
try/main_test_proto.c:1048:25: note: did you mean to use 'd'?
        ret1 = printf("orig : %D\n", 42);
                               ^
                               d
try/main_test_proto.c:1042:6: warning: no previous prototype for function 'test_ld_01' [-Wmissing-prototypes]
void    test_ld_01(void)
        ^
try/main_test_proto.c:1062:25: warning: 'D' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %D\n", UINT_MAX);
                              ~^
try/main_test_proto.c:1062:25: note: did you mean to use 'd'?
        ret1 = printf("orig : %D\n", UINT_MAX);
                               ^
                               d
try/main_test_proto.c:1056:6: warning: no previous prototype for function 'test_ld_02' [-Wmissing-prototypes]
void    test_ld_02(void)
        ^
try/main_test_proto.c:1076:25: warning: 'D' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %D\n", INT_MIN);
                              ~^
try/main_test_proto.c:1076:25: note: did you mean to use 'd'?
        ret1 = printf("orig : %D\n", INT_MIN);
                               ^
                               d
try/main_test_proto.c:1070:6: warning: no previous prototype for function 'test_ld_03' [-Wmissing-prototypes]
void    test_ld_03(void)
        ^
try/main_test_proto.c:1090:25: warning: 'D' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %D\n", INT_MAX);
                              ~^
try/main_test_proto.c:1090:25: note: did you mean to use 'd'?
        ret1 = printf("orig : %D\n", INT_MAX);
                               ^
                               d
try/main_test_proto.c:1084:6: warning: no previous prototype for function 'test_ld_04' [-Wmissing-prototypes]
void    test_ld_04(void)
        ^
try/main_test_proto.c:1105:26: warning: 'D' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %hD\n", a);
                              ~~^
try/main_test_proto.c:1105:26: note: did you mean to use 'd'?
        ret1 = printf("orig : %hD\n", a);
                                ^
                                d
try/main_test_proto.c:1098:6: warning: no previous prototype for function 'test_ld_05' [-Wmissing-prototypes]
void    test_ld_05(void)
        ^
try/main_test_proto.c:1120:26: warning: 'D' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %hD\n", a);
                              ~~^
try/main_test_proto.c:1120:26: note: did you mean to use 'd'?
        ret1 = printf("orig : %hD\n", a);
                                ^
                                d
try/main_test_proto.c:1113:6: warning: no previous prototype for function 'test_ld_06' [-Wmissing-prototypes]
void    test_ld_06(void)
        ^
try/main_test_proto.c:1135:26: warning: 'D' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %hD\n", a);
                              ~~^
try/main_test_proto.c:1135:26: note: did you mean to use 'd'?
        ret1 = printf("orig : %hD\n", a);
                                ^
                                d
try/main_test_proto.c:1128:6: warning: no previous prototype for function 'test_ld_07' [-Wmissing-prototypes]
void    test_ld_07(void)
        ^
try/main_test_proto.c:1150:27: warning: 'D' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %hhD\n", a);
                              ~~~^
try/main_test_proto.c:1150:27: note: did you mean to use 'd'?
        ret1 = printf("orig : %hhD\n", a);
                                 ^
                                 d
try/main_test_proto.c:1143:6: warning: no previous prototype for function 'test_ld_08' [-Wmissing-prototypes]
void    test_ld_08(void)
        ^
try/main_test_proto.c:1165:27: warning: 'D' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %hhD\n", a);
                              ~~~^
try/main_test_proto.c:1165:27: note: did you mean to use 'd'?
        ret1 = printf("orig : %hhD\n", a);
                                 ^
                                 d
try/main_test_proto.c:1158:6: warning: no previous prototype for function 'test_ld_09' [-Wmissing-prototypes]
void    test_ld_09(void)
        ^
try/main_test_proto.c:1180:27: warning: 'D' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %hhD\n", a);
                              ~~~^
try/main_test_proto.c:1180:27: note: did you mean to use 'd'?
        ret1 = printf("orig : %hhD\n", a);
                                 ^
                                 d
try/main_test_proto.c:1173:6: warning: no previous prototype for function 'test_ld_10' [-Wmissing-prototypes]
void    test_ld_10(void)
        ^
try/main_test_proto.c:1195:27: warning: 'D' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %llD\n", a);
                              ~~~^
try/main_test_proto.c:1195:27: note: did you mean to use 'd'?
        ret1 = printf("orig : %llD\n", a);
                                 ^
                                 d
try/main_test_proto.c:1188:6: warning: no previous prototype for function 'test_ld_11' [-Wmissing-prototypes]
void    test_ld_11(void)
        ^
try/main_test_proto.c:1210:26: warning: 'D' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %lD\n", a);
                              ~~^
try/main_test_proto.c:1210:26: note: did you mean to use 'd'?
        ret1 = printf("orig : %lD\n", a);
                                ^
                                d
try/main_test_proto.c:1203:6: warning: no previous prototype for function 'test_ld_12' [-Wmissing-prototypes]
void    test_ld_12(void)
        ^
try/main_test_proto.c:1220:15: warning: implicit conversion changes signedness: 'unsigned long' to 'intmax_t' (aka 'long') [-Wsign-conversion]
        intmax_t a = ULONG_MAX;
                 ~   ^~~~~~~~~
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/8.0.0/include/limits.h:73:37: note: expanded from macro 'ULONG_MAX'
#define ULONG_MAX (__LONG_MAX__ *2UL+1UL)
                   ~~~~~~~~~~~~~~~~~^~~~
try/main_test_proto.c:1225:26: warning: 'D' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %jD\n", a);
                              ~~^
try/main_test_proto.c:1225:26: note: did you mean to use 'd'?
        ret1 = printf("orig : %jD\n", a);
                                ^
                                d
try/main_test_proto.c:1218:6: warning: no previous prototype for function 'test_ld_13' [-Wmissing-prototypes]
void    test_ld_13(void)
        ^
try/main_test_proto.c:1240:26: warning: 'D' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %jD\n", a);
                              ~~^
try/main_test_proto.c:1240:26: note: did you mean to use 'd'?
        ret1 = printf("orig : %jD\n", a);
                                ^
                                d
try/main_test_proto.c:1233:6: warning: no previous prototype for function 'test_ld_14' [-Wmissing-prototypes]
void    test_ld_14(void)
        ^
try/main_test_proto.c:1255:28: warning: 'D' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %.*jD\n", 5, a);
                              ~~~~^
try/main_test_proto.c:1255:28: note: did you mean to use 'd'?
        ret1 = printf("orig : %.*jD\n", 5, a);
                                  ^
                                  d
try/main_test_proto.c:1248:6: warning: no previous prototype for function 'test_ld_15' [-Wmissing-prototypes]
void    test_ld_15(void)
        ^
try/main_test_proto.c:1270:25: warning: 'D' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %D\n", -1L);
                              ~^
try/main_test_proto.c:1270:25: note: did you mean to use 'd'?
        ret1 = printf("orig : %D\n", -1L);
                               ^
                               d
try/main_test_proto.c:1270:31: warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
        ret1 = printf("orig : %D\n", -1L);
                              ~~     ^~~
                              %lD
try/main_test_proto.c:1265:12: warning: unused variable 'a' [-Wunused-variable]
        uintmax_t a = ULONG_MAX;
                  ^
try/main_test_proto.c:1263:6: warning: no previous prototype for function 'test_ld_16' [-Wmissing-prototypes]
void    test_ld_16(void)
        ^
try/main_test_proto.c:1280:7: warning: no previous prototype for function 'test_i_01' [-Wmissing-prototypes]
void    test_i_01(void)
        ^
try/main_test_proto.c:1295:7: warning: no previous prototype for function 'test_i_02' [-Wmissing-prototypes]
void    test_i_02(void)
        ^
try/main_test_proto.c:1310:7: warning: no previous prototype for function 'test_i_03' [-Wmissing-prototypes]
void    test_i_03(void)
        ^
try/main_test_proto.c:1325:7: warning: no previous prototype for function 'test_i_04' [-Wmissing-prototypes]
void    test_i_04(void)
        ^
try/main_test_proto.c:1340:7: warning: no previous prototype for function 'test_i_05' [-Wmissing-prototypes]
void    test_i_05(void)
        ^
try/main_test_proto.c:1355:7: warning: no previous prototype for function 'test_i_06' [-Wmissing-prototypes]
void    test_i_06(void)
        ^
try/main_test_proto.c:1371:7: warning: no previous prototype for function 'test_i_07' [-Wmissing-prototypes]
void    test_i_07(void)
        ^
try/main_test_proto.c:1387:7: warning: no previous prototype for function 'test_i_08' [-Wmissing-prototypes]
void    test_i_08(void)
        ^
try/main_test_proto.c:1402:7: warning: no previous prototype for function 'test_i_09' [-Wmissing-prototypes]
void    test_i_09(void)
        ^
try/main_test_proto.c:1441:7: warning: no previous prototype for function 'test_o_01' [-Wmissing-prototypes]
void    test_o_01(void)
        ^
try/main_test_proto.c:1456:7: warning: no previous prototype for function 'test_o_02' [-Wmissing-prototypes]
void    test_o_02(void)
        ^
try/main_test_proto.c:1471:7: warning: no previous prototype for function 'test_o_03' [-Wmissing-prototypes]
void    test_o_03(void)
        ^
try/main_test_proto.c:1486:7: warning: no previous prototype for function 'test_o_04' [-Wmissing-prototypes]
void    test_o_04(void)
        ^
try/main_test_proto.c:1501:7: warning: no previous prototype for function 'test_o_05' [-Wmissing-prototypes]
void    test_o_05(void)
        ^
try/main_test_proto.c:1516:7: warning: no previous prototype for function 'test_o_06' [-Wmissing-prototypes]
void    test_o_06(void)
        ^
try/main_test_proto.c:1531:7: warning: no previous prototype for function 'test_o_07' [-Wmissing-prototypes]
void    test_o_07(void)
        ^
try/main_test_proto.c:1546:7: warning: no previous prototype for function 'test_o_08' [-Wmissing-prototypes]
void    test_o_08(void)
        ^
try/main_test_proto.c:1565:15: warning: implicit conversion changes signedness: 'unsigned long' to 'intmax_t' (aka 'long') [-Wsign-conversion]
        intmax_t a = ULONG_MAX;
                 ~   ^~~~~~~~~
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/8.0.0/include/limits.h:73:37: note: expanded from macro 'ULONG_MAX'
#define ULONG_MAX (__LONG_MAX__ *2UL+1UL)
                   ~~~~~~~~~~~~~~~~~^~~~
try/main_test_proto.c:1561:7: warning: no previous prototype for function 'test_o_09' [-Wmissing-prototypes]
void    test_o_09(void)
        ^
try/main_test_proto.c:1576:7: warning: no previous prototype for function 'test_o_10' [-Wmissing-prototypes]
void    test_o_10(void)
        ^
try/main_test_proto.c:1591:7: warning: no previous prototype for function 'test_o_11' [-Wmissing-prototypes]
void    test_o_11(void)
        ^
try/main_test_proto.c:1606:7: warning: no previous prototype for function 'test_o_12' [-Wmissing-prototypes]
void    test_o_12(void)
        ^
try/main_test_proto.c:1621:7: warning: no previous prototype for function 'test_o_13' [-Wmissing-prototypes]
void    test_o_13(void)
        ^
try/main_test_proto.c:1635:7: warning: no previous prototype for function 'test_o_14' [-Wmissing-prototypes]
void    test_o_14(void)
        ^
try/main_test_proto.c:1649:7: warning: no previous prototype for function 'test_o_15' [-Wmissing-prototypes]
void    test_o_15(void)
        ^
try/main_test_proto.c:1671:25: warning: 'O' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %O\n", a);
                              ~^
try/main_test_proto.c:1671:25: note: did you mean to use 'o'?
        ret1 = printf("orig : %O\n", a);
                               ^
                               o
try/main_test_proto.c:1664:7: warning: no previous prototype for function 'test_lo_01' [-Wmissing-prototypes]
void    test_lo_01(void)
        ^
try/main_test_proto.c:1686:25: warning: 'O' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %O\n", a);
                              ~^
try/main_test_proto.c:1686:25: note: did you mean to use 'o'?
        ret1 = printf("orig : %O\n", a);
                               ^
                               o
try/main_test_proto.c:1679:7: warning: no previous prototype for function 'test_lo_02' [-Wmissing-prototypes]
void    test_lo_02(void)
        ^
try/main_test_proto.c:1701:25: warning: 'O' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %O\n", a);
                              ~^
try/main_test_proto.c:1701:25: note: did you mean to use 'o'?
        ret1 = printf("orig : %O\n", a);
                               ^
                               o
try/main_test_proto.c:1694:7: warning: no previous prototype for function 'test_lo_03' [-Wmissing-prototypes]
void    test_lo_03(void)
        ^
try/main_test_proto.c:1716:25: warning: 'O' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %O\n", a);
                              ~^
try/main_test_proto.c:1716:25: note: did you mean to use 'o'?
        ret1 = printf("orig : %O\n", a);
                               ^
                               o
try/main_test_proto.c:1709:7: warning: no previous prototype for function 'test_lo_04' [-Wmissing-prototypes]
void    test_lo_04(void)
        ^
try/main_test_proto.c:1726:6: warning: no previous prototype for function 'test_u_01' [-Wmissing-prototypes]
void    test_u_01(void)
        ^
try/main_test_proto.c:1743:6: warning: no previous prototype for function 'test_u_02' [-Wmissing-prototypes]
void    test_u_02(void)
        ^
try/main_test_proto.c:1760:6: warning: no previous prototype for function 'test_u_03' [-Wmissing-prototypes]
void    test_u_03(void)
        ^
try/main_test_proto.c:1777:6: warning: no previous prototype for function 'test_u_04' [-Wmissing-prototypes]
void    test_u_04(void)
        ^
try/main_test_proto.c:1801:25: warning: flag '#' results in undefined behavior with 'u' conversion specifier [-Wformat]
        ret1 = printf("orig : %#u\n", a);
                              ~^~
try/main_test_proto.c:1794:6: warning: no previous prototype for function 'test_u_05' [-Wmissing-prototypes]
void    test_u_05(void)
        ^
try/main_test_proto.c:1816:25: warning: flag ' ' results in undefined behavior with 'u' conversion specifier [-Wformat]
        ret1 = printf("orig : % u\n", a);
                              ~^~
try/main_test_proto.c:1809:6: warning: no previous prototype for function 'test_u_06' [-Wmissing-prototypes]
void    test_u_06(void)
        ^
try/main_test_proto.c:1824:6: warning: no previous prototype for function 'test_u_07' [-Wmissing-prototypes]
void    test_u_07(void)
        ^
try/main_test_proto.c:1846:25: warning: flag '+' results in undefined behavior with 'u' conversion specifier [-Wformat]
        ret1 = printf("orig : %+u\n", a);
                              ~^~
try/main_test_proto.c:1839:6: warning: no previous prototype for function 'test_u_08' [-Wmissing-prototypes]
void    test_u_08(void)
        ^
try/main_test_proto.c:1854:6: warning: no previous prototype for function 'test_u_09' [-Wmissing-prototypes]
void    test_u_09(void)
        ^
try/main_test_proto.c:1869:6: warning: no previous prototype for function 'test_u_10' [-Wmissing-prototypes]
void    test_u_10(void)
        ^
try/main_test_proto.c:1884:6: warning: no previous prototype for function 'test_u_11' [-Wmissing-prototypes]
void    test_u_11(void)
        ^
try/main_test_proto.c:1899:6: warning: no previous prototype for function 'test_u_12' [-Wmissing-prototypes]
void    test_u_12(void)
        ^
try/main_test_proto.c:1914:6: warning: no previous prototype for function 'test_u_13' [-Wmissing-prototypes]
void    test_u_13(void)
        ^
try/main_test_proto.c:1929:6: warning: no previous prototype for function 'test_u_14' [-Wmissing-prototypes]
void    test_u_14(void)
        ^
try/main_test_proto.c:1944:6: warning: no previous prototype for function 'test_u_15' [-Wmissing-prototypes]
void    test_u_15(void)
        ^
try/main_test_proto.c:1959:6: warning: no previous prototype for function 'test_u_16' [-Wmissing-prototypes]
void    test_u_16(void)
        ^
try/main_test_proto.c:1981:26: warning: flag '#' results in undefined behavior with 'u' conversion specifier [-Wformat]
        ret1 = printf("orig : *%#.0u*\n", a);
                               ~^~~~
try/main_test_proto.c:1974:6: warning: no previous prototype for function 'test_u_17' [-Wmissing-prototypes]
void    test_u_17(void)
        ^
try/main_test_proto.c:1999:25: warning: 'U' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %U\n", 42);
                              ~^
try/main_test_proto.c:1999:25: note: did you mean to use 'u'?
        ret1 = printf("orig : %U\n", 42);
                               ^
                               u
try/main_test_proto.c:1993:6: warning: no previous prototype for function 'test_lu_01' [-Wmissing-prototypes]
void    test_lu_01(void)
        ^
try/main_test_proto.c:2014:26: warning: 'U' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %hU\n", a);
                              ~~^
try/main_test_proto.c:2014:26: note: did you mean to use 'u'?
        ret1 = printf("orig : %hU\n", a);
                                ^
                                u
try/main_test_proto.c:2007:6: warning: no previous prototype for function 'test_lu_02' [-Wmissing-prototypes]
void    test_lu_02(void)
        ^
try/main_test_proto.c:2029:25: warning: 'U' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %U\n", 4294967295);
                              ~^
try/main_test_proto.c:2029:25: note: did you mean to use 'u'?
        ret1 = printf("orig : %U\n", 4294967295);
                               ^
                               u
try/main_test_proto.c:2029:31: warning: format specifies type 'unsigned int' but the argument has type 'long' [-Wformat]
        ret1 = printf("orig : %U\n", 4294967295);
                              ~~     ^~~~~~~~~~
                              %ld
try/main_test_proto.c:2024:17: warning: unused variable 'a' [-Wunused-variable]
        unsigned short a = USHRT_MAX;
                       ^
try/main_test_proto.c:2022:6: warning: no previous prototype for function 'test_lu_03' [-Wmissing-prototypes]
void    test_lu_03(void)
        ^
try/main_test_proto.c:2044:27: warning: 'U' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %hhU\n", ULONG_MAX);
                              ~~~^
try/main_test_proto.c:2044:27: note: did you mean to use 'u'?
        ret1 = printf("orig : %hhU\n", ULONG_MAX);
                                 ^
                                 u
try/main_test_proto.c:2044:33: warning: format specifies type 'unsigned char' but the argument has type 'unsigned long' [-Wformat]
        ret1 = printf("orig : %hhU\n", ULONG_MAX);
                              ~~~~     ^~~~~~~~~
                              %lU
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/8.0.0/include/limits.h:73:19: note: expanded from macro 'ULONG_MAX'
#define ULONG_MAX (__LONG_MAX__ *2UL+1UL)
                  ^~~~~~~~~~~~~~~~~~~~~~~
try/main_test_proto.c:2039:17: warning: unused variable 'a' [-Wunused-variable]
        unsigned short a = USHRT_MAX;
                       ^
try/main_test_proto.c:2037:6: warning: no previous prototype for function 'test_lu_04' [-Wmissing-prototypes]
void    test_lu_04(void)
        ^
try/main_test_proto.c:2059:25: warning: 'U' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %U\n", 4294967296);
                              ~^
try/main_test_proto.c:2059:25: note: did you mean to use 'u'?
        ret1 = printf("orig : %U\n", 4294967296);
                               ^
                               u
try/main_test_proto.c:2059:31: warning: format specifies type 'unsigned int' but the argument has type 'long' [-Wformat]
        ret1 = printf("orig : %U\n", 4294967296);
                              ~~     ^~~~~~~~~~
                              %ld
try/main_test_proto.c:2054:17: warning: unused variable 'a' [-Wunused-variable]
        unsigned short a = USHRT_MAX;
                       ^
try/main_test_proto.c:2052:6: warning: no previous prototype for function 'test_lu_05' [-Wmissing-prototypes]
void    test_lu_05(void)
        ^
try/main_test_proto.c:2071:6: warning: no previous prototype for function 'test_x_01' [-Wmissing-prototypes]
void    test_x_01(void)
        ^
try/main_test_proto.c:2085:6: warning: no previous prototype for function 'test_x_02' [-Wmissing-prototypes]
void    test_x_02(void)
        ^
try/main_test_proto.c:2099:6: warning: no previous prototype for function 'test_x_03' [-Wmissing-prototypes]
void    test_x_03(void)
        ^
try/main_test_proto.c:2114:6: warning: no previous prototype for function 'test_x_04' [-Wmissing-prototypes]
void    test_x_04(void)
        ^
try/main_test_proto.c:2129:6: warning: no previous prototype for function 'test_x_05' [-Wmissing-prototypes]
void    test_x_05(void)
        ^
try/main_test_proto.c:2144:6: warning: no previous prototype for function 'test_x_06' [-Wmissing-prototypes]
void    test_x_06(void)
        ^
try/main_test_proto.c:2158:6: warning: no previous prototype for function 'test_x_07' [-Wmissing-prototypes]
void    test_x_07(void)
        ^
try/main_test_proto.c:2172:6: warning: no previous prototype for function 'test_x_08' [-Wmissing-prototypes]
void    test_x_08(void)
        ^
try/main_test_proto.c:2186:6: warning: no previous prototype for function 'test_x_09' [-Wmissing-prototypes]
void    test_x_09(void)
        ^
try/main_test_proto.c:2203:11: warning: implicit conversion changes signedness: 'int' to 'char' [-Wsign-conversion]
        char a = 128;
             ~   ^~~
try/main_test_proto.c:2201:6: warning: no previous prototype for function 'test_x_10' [-Wmissing-prototypes]
void    test_x_10(void)
        ^
try/main_test_proto.c:2216:6: warning: no previous prototype for function 'test_x_11' [-Wmissing-prototypes]
void    test_x_11(void)
        ^
try/main_test_proto.c:2231:6: warning: no previous prototype for function 'test_x_12' [-Wmissing-prototypes]
void    test_x_12(void)
        ^
try/main_test_proto.c:2246:6: warning: no previous prototype for function 'test_x_13' [-Wmissing-prototypes]
void    test_x_13(void)
        ^
try/main_test_proto.c:2261:6: warning: no previous prototype for function 'test_x_14' [-Wmissing-prototypes]
void    test_x_14(void)
        ^
try/main_test_proto.c:2276:6: warning: no previous prototype for function 'test_x_15' [-Wmissing-prototypes]
void    test_x_15(void)
        ^
try/main_test_proto.c:2291:6: warning: no previous prototype for function 'test_x_16' [-Wmissing-prototypes]
void    test_x_16(void)
        ^
try/main_test_proto.c:2306:6: warning: no previous prototype for function 'test_x_17' [-Wmissing-prototypes]
void    test_x_17(void)
        ^
try/main_test_proto.c:2321:6: warning: no previous prototype for function 'test_x_18' [-Wmissing-prototypes]
void    test_x_18(void)
        ^
try/main_test_proto.c:2336:6: warning: no previous prototype for function 'test_x_19' [-Wmissing-prototypes]
void    test_x_19(void)
        ^
try/main_test_proto.c:2351:6: warning: no previous prototype for function 'test_x_20' [-Wmissing-prototypes]
void    test_x_20(void)
        ^
try/main_test_proto.c:2366:6: warning: no previous prototype for function 'test_x_21' [-Wmissing-prototypes]
void    test_x_21(void)
        ^
try/main_test_proto.c:2381:6: warning: no previous prototype for function 'test_x_22' [-Wmissing-prototypes]
void    test_x_22(void)
        ^
try/main_test_proto.c:2396:6: warning: no previous prototype for function 'test_x_23' [-Wmissing-prototypes]
void    test_x_23(void)
        ^
try/main_test_proto.c:2411:6: warning: no previous prototype for function 'test_x_24' [-Wmissing-prototypes]
void    test_x_24(void)
        ^
try/main_test_proto.c:2426:6: warning: no previous prototype for function 'test_x_25' [-Wmissing-prototypes]
void    test_x_25(void)
        ^
try/main_test_proto.c:2442:6: warning: no previous prototype for function 'test_x_26' [-Wmissing-prototypes]
void    test_x_26(void)
        ^
try/main_test_proto.c:2457:6: warning: no previous prototype for function 'test_x_27' [-Wmissing-prototypes]
void    test_x_27(void)
        ^
try/main_test_proto.c:2472:6: warning: no previous prototype for function 'test_x_28' [-Wmissing-prototypes]
void    test_x_28(void)
        ^
try/main_test_proto.c:2487:6: warning: no previous prototype for function 'test_x_29' [-Wmissing-prototypes]
void    test_x_29(void)
        ^
try/main_test_proto.c:2502:6: warning: no previous prototype for function 'test_x_30' [-Wmissing-prototypes]
void    test_x_30(void)
        ^
try/main_test_proto.c:2517:6: warning: no previous prototype for function 'test_x_31' [-Wmissing-prototypes]
void    test_x_31(void)
        ^
try/main_test_proto.c:2533:6: warning: no previous prototype for function 'test_x_32' [-Wmissing-prototypes]
void    test_x_32(void)
        ^
try/main_test_proto.c:2564:6: warning: no previous prototype for function 'test_lx_01' [-Wmissing-prototypes]
void    test_lx_01(void)
        ^
try/main_test_proto.c:2578:6: warning: no previous prototype for function 'test_lx_02' [-Wmissing-prototypes]
void    test_lx_02(void)
        ^
try/main_test_proto.c:2593:6: warning: no previous prototype for function 'test_lx_03' [-Wmissing-prototypes]
void    test_lx_03(void)
        ^
try/main_test_proto.c:2608:6: warning: no previous prototype for function 'test_lx_04' [-Wmissing-prototypes]
void    test_lx_04(void)
        ^
try/main_test_proto.c:2623:6: warning: no previous prototype for function 'test_lx_05' [-Wmissing-prototypes]
void    test_lx_05(void)
        ^
try/main_test_proto.c:2638:6: warning: no previous prototype for function 'test_lx_06' [-Wmissing-prototypes]
void    test_lx_06(void)
        ^
try/main_test_proto.c:2653:6: warning: no previous prototype for function 'test_lx_07' [-Wmissing-prototypes]
void    test_lx_07(void)
        ^
try/main_test_proto.c:2668:6: warning: no previous prototype for function 'test_lx_08' [-Wmissing-prototypes]
void    test_lx_08(void)
        ^
try/main_test_proto.c:2683:6: warning: no previous prototype for function 'test_lx_09' [-Wmissing-prototypes]
void    test_lx_09(void)
        ^
try/main_test_proto.c:2698:6: warning: no previous prototype for function 'test_lx_10' [-Wmissing-prototypes]
void    test_lx_10(void)
        ^
try/main_test_proto.c:2715:6: warning: no previous prototype for function 'test_c_01' [-Wmissing-prototypes]
void    test_c_01(void)
        ^
try/main_test_proto.c:2729:6: warning: no previous prototype for function 'test_c_02' [-Wmissing-prototypes]
void    test_c_02(void)
        ^
try/main_test_proto.c:2743:6: warning: no previous prototype for function 'test_c_03' [-Wmissing-prototypes]
void    test_c_03(void)
        ^
try/main_test_proto.c:2763:31: warning: format specifies type 'int' but the argument has type 'void *' [-Wformat]
        ret1 = printf("orig : %c\n", NULL);
                              ~~     ^~~~
/usr/include/sys/_types/_null.h:29:15: note: expanded from macro 'NULL'
#define NULL  __DARWIN_NULL
              ^~~~~~~~~~~~~
/usr/include/sys/_types.h:52:23: note: expanded from macro '__DARWIN_NULL'
#define __DARWIN_NULL ((void *)0)
                      ^~~~~~~~~~~
try/main_test_proto.c:2757:6: warning: no previous prototype for function 'test_c_04' [-Wmissing-prototypes]
void    test_c_04(void)
        ^
try/main_test_proto.c:2771:6: warning: no previous prototype for function 'test_c_05' [-Wmissing-prototypes]
void    test_c_05(void)
        ^
try/main_test_proto.c:2785:6: warning: no previous prototype for function 'test_c_06' [-Wmissing-prototypes]
void    test_c_06(void)
        ^
try/main_test_proto.c:2805:25: warning: precision used with 'c' conversion specifier, resulting in undefined behavior [-Wformat]
        ret1 = printf("orig : %.2c\n", NULL);
                              ~^~~
try/main_test_proto.c:2805:33: warning: format specifies type 'int' but the argument has type 'void *' [-Wformat]
        ret1 = printf("orig : %.2c\n", NULL);
                              ~~~~     ^~~~
/usr/include/sys/_types/_null.h:29:15: note: expanded from macro 'NULL'
#define NULL  __DARWIN_NULL
              ^~~~~~~~~~~~~
/usr/include/sys/_types.h:52:23: note: expanded from macro '__DARWIN_NULL'
#define __DARWIN_NULL ((void *)0)
                      ^~~~~~~~~~~
try/main_test_proto.c:2799:6: warning: no previous prototype for function 'test_c_07' [-Wmissing-prototypes]
void    test_c_07(void)
        ^
try/main_test_proto.c:2819:25: warning: precision used with 'c' conversion specifier, resulting in undefined behavior [-Wformat]
        ret1 = printf("orig : %.1c\n", NULL);
                              ~^~~
try/main_test_proto.c:2819:33: warning: format specifies type 'int' but the argument has type 'void *' [-Wformat]
        ret1 = printf("orig : %.1c\n", NULL);
                              ~~~~     ^~~~
/usr/include/sys/_types/_null.h:29:15: note: expanded from macro 'NULL'
#define NULL  __DARWIN_NULL
              ^~~~~~~~~~~~~
/usr/include/sys/_types.h:52:23: note: expanded from macro '__DARWIN_NULL'
#define __DARWIN_NULL ((void *)0)
                      ^~~~~~~~~~~
try/main_test_proto.c:2813:6: warning: no previous prototype for function 'test_c_08' [-Wmissing-prototypes]
void    test_c_08(void)
        ^
try/main_test_proto.c:2833:25: warning: precision used with 'c' conversion specifier, resulting in undefined behavior [-Wformat]
        ret1 = printf("orig : %.3c\n", NULL);
                              ~^~~
try/main_test_proto.c:2833:33: warning: format specifies type 'int' but the argument has type 'void *' [-Wformat]
        ret1 = printf("orig : %.3c\n", NULL);
                              ~~~~     ^~~~
/usr/include/sys/_types/_null.h:29:15: note: expanded from macro 'NULL'
#define NULL  __DARWIN_NULL
              ^~~~~~~~~~~~~
/usr/include/sys/_types.h:52:23: note: expanded from macro '__DARWIN_NULL'
#define __DARWIN_NULL ((void *)0)
                      ^~~~~~~~~~~
try/main_test_proto.c:2827:6: warning: no previous prototype for function 'test_c_09' [-Wmissing-prototypes]
void    test_c_09(void)
        ^
try/main_test_proto.c:2850:25: warning: 'C' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %C\n", 'G');
                              ~^
try/main_test_proto.c:2844:6: warning: no previous prototype for function 'test_lc_01' [-Wmissing-prototypes]
void    test_lc_01(void)
        ^
try/main_test_proto.c:2864:25: warning: 'C' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %C\n", 'a');
                              ~^
try/main_test_proto.c:2858:6: warning: no previous prototype for function 'test_lc_02' [-Wmissing-prototypes]
void    test_lc_02(void)
        ^
try/main_test_proto.c:2879:26: warning: 'C' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 =  printf("orig : %C\n", L'©');
                               ~^
try/main_test_proto.c:2872:6: warning: no previous prototype for function 'test_lc_03' [-Wmissing-prototypes]
void    test_lc_03(void)
        ^
try/main_test_proto.c:2894:25: warning: 'C' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %C\n", L'ߺ');
                              ~^
try/main_test_proto.c:2887:6: warning: no previous prototype for function 'test_lc_04' [-Wmissing-prototypes]
void    test_lc_04(void)
        ^
try/main_test_proto.c:2909:25: warning: 'C' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %C\n", L'ࠀ');
                              ~^
try/main_test_proto.c:2902:6: warning: no previous prototype for function 'test_lc_05' [-Wmissing-prototypes]
void    test_lc_05(void)
        ^
try/main_test_proto.c:2921:25: warning: 'C' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %C\n", L'<U+1F917>');
                              ~^
try/main_test_proto.c:2914:6: warning: no previous prototype for function 'test_lc_06' [-Wmissing-prototypes]
void    test_lc_06(void)
        ^
try/main_test_proto.c:2932:18: warning: 'C' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        printf("orig : %C\n", a);
                       ~^
try/main_test_proto.c:2926:6: warning: no previous prototype for function 'test_lc_07' [-Wmissing-prototypes]
void    test_lc_07(void)
        ^
try/main_test_proto.c:2943:18: warning: 'C' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        printf("orig : %C\n", a);
                       ~^
try/main_test_proto.c:2937:6: warning: no previous prototype for function 'test_lc_08' [-Wmissing-prototypes]
void    test_lc_08(void)
        ^
try/main_test_proto.c:2954:18: warning: 'C' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        printf("orig : %C\n", a);
                       ~^
try/main_test_proto.c:2948:6: warning: no previous prototype for function 'test_lc_09' [-Wmissing-prototypes]
void    test_lc_09(void)
        ^
try/main_test_proto.c:2968:31: warning: format specifies type 'void *' but the argument has type 'int *' [-Wformat-pedantic]
        ret1 = printf("orig : %p\n", &a);
                              ~~     ^~
try/main_test_proto.c:2961:6: warning: no previous prototype for function 'test_p_01' [-Wmissing-prototypes]
void    test_p_01(void)
        ^
try/main_test_proto.c:2983:32: warning: format specifies type 'void *' but the argument has type 'int *' [-Wformat-pedantic]
        ret1 = printf("orig : %5p\n", &b);
                              ~~~     ^~
try/main_test_proto.c:2976:6: warning: no previous prototype for function 'test_p_02' [-Wmissing-prototypes]
void    test_p_02(void)
        ^
try/main_test_proto.c:2998:33: warning: format specifies type 'void *' but the argument has type 'int *' [-Wformat-pedantic]
        ret1 = printf("orig : %25p\n", &b);
                              ~~~~     ^~
try/main_test_proto.c:2991:6: warning: no previous prototype for function 'test_p_03' [-Wmissing-prototypes]
void    test_p_03(void)
        ^
try/main_test_proto.c:3014:31: warning: format specifies type 'void *' but the argument has type 'int **' [-Wformat-pedantic]
        ret1 = printf("orig : %p\n", &i);
                              ~~     ^~
try/main_test_proto.c:3007:6: warning: no previous prototype for function 'test_p_04' [-Wmissing-prototypes]
void    test_p_04(void)
        ^
try/main_test_proto.c:3024:6: warning: no previous prototype for function 'test_modulo_01' [-Wmissing-prototypes]
void    test_modulo_01(void)
        ^
try/main_test_proto.c:3037:6: warning: no previous prototype for function 'test_modulo_02' [-Wmissing-prototypes]
void    test_modulo_02(void)
        ^
try/main_test_proto.c:3050:6: warning: no previous prototype for function 'test_modulo_03' [-Wmissing-prototypes]
void    test_modulo_03(void)
        ^
try/main_test_proto.c:3063:6: warning: no previous prototype for function 'test_modulo_04' [-Wmissing-prototypes]
void    test_modulo_04(void)
        ^
try/main_test_proto.c:3081:17: warning: incomplete format specifier [-Wformat]
        ret1 = printf("% ");
                       ^~
try/main_test_proto.c:3076:6: warning: no previous prototype for function 'test_modulo_05' [-Wmissing-prototypes]
void    test_modulo_05(void)
        ^
try/main_test_proto.c:3095:27: warning: data argument not used by format string [-Wformat-extra-args]
        printf("conv_b => 01\n", 42);
               ~~~~~~~~~~~~~~~~  ^
try/main_test_proto.c:3091:7: warning: no previous prototype for function 'test_b_01' [-Wmissing-prototypes]
void    test_b_01(void)
        ^
try/main_test_proto.c:3102:7: warning: no previous prototype for function 'test_b_02' [-Wmissing-prototypes]
void    test_b_02(void)
        ^
try/main_test_proto.c:3113:7: warning: no previous prototype for function 'test_b_03' [-Wmissing-prototypes]
void    test_b_03(void)
        ^
try/main_test_proto.c:3124:7: warning: no previous prototype for function 'test_b_04' [-Wmissing-prototypes]
void    test_b_04(void)
        ^
try/main_test_proto.c:3135:7: warning: no previous prototype for function 'test_b_05' [-Wmissing-prototypes]
void    test_b_05(void)
        ^
try/main_test_proto.c:3146:7: warning: no previous prototype for function 'test_b_06' [-Wmissing-prototypes]
void    test_b_06(void)
        ^
try/main_test_proto.c:3157:7: warning: no previous prototype for function 'test_b_07' [-Wmissing-prototypes]
void    test_b_07(void)
        ^
try/main_test_proto.c:3168:7: warning: no previous prototype for function 'test_b_08' [-Wmissing-prototypes]
void    test_b_08(void)
        ^
try/main_test_proto.c:3179:7: warning: no previous prototype for function 'test_b_09' [-Wmissing-prototypes]
void    test_b_09(void)
        ^
try/main_test_proto.c:3195:12: warning: unused variable 'a' [-Wunused-variable]
        long long a = LONG_MAX;
                  ^
try/main_test_proto.c:3193:7: warning: no previous prototype for function 'mutant_01' [-Wmissing-prototypes]
void    mutant_01(void)
        ^
try/main_test_proto.c:3210:12: warning: unused variable 'a' [-Wunused-variable]
        long long a = LONG_MAX;
                  ^
try/main_test_proto.c:3208:7: warning: no previous prototype for function 'mutant_02' [-Wmissing-prototypes]
void    mutant_02(void)
        ^
try/main_test_proto.c:3223:7: warning: no previous prototype for function 'mutant_03' [-Wmissing-prototypes]
void    mutant_03(void)
        ^
try/main_test_proto.c:3231:7: warning: no previous prototype for function 'mutant_04' [-Wmissing-prototypes]
void    mutant_04(void)
        ^
try/main_test_proto.c:3238:7: warning: no previous prototype for function 'mutant_05' [-Wmissing-prototypes]
void    mutant_05(void)
        ^
try/main_test_proto.c:3247:7: warning: no previous prototype for function 'mutant_06' [-Wmissing-prototypes]
void    mutant_06(void)
        ^
try/main_test_proto.c:3262:9: warning: unused variable 'a' [-Wunused-variable]
        size_t a = LONG_MAX;
               ^
try/main_test_proto.c:3260:6: warning: no previous prototype for function 'mutant_07' [-Wmissing-prototypes]
void    mutant_07(void)
        ^
try/main_test_proto.c:3282:49: warning: format specifies type 'void *' but the argument has type 'void (*)(void)' [-Wformat-pedantic]
        ret1 = printf("orig : %s %p %d\n", "a string", &mutant_08, 42);
                                 ~~                    ^~~~~~~~~~
try/main_test_proto.c:3277:9: warning: unused variable 'a' [-Wunused-variable]
        size_t a = LONG_MAX;
               ^
try/main_test_proto.c:3275:6: warning: no previous prototype for function 'mutant_08' [-Wmissing-prototypes]
void    mutant_08(void)
        ^
try/main_test_proto.c:3298:73: warning: format specifies type 'void *' but the argument has type 'char *' [-Wformat-pedantic]
        ret1 = printf("orig : %s%d%p%%%S%D%i%o%O%u%U%x%X%c%C\n","bonjour", 42, &c, L"暖炉", LONG_MAX, 42, 42, 42, 100000, ULONG_MAX, 42, 42, 'c', L'플');
                                  ~~                                           ^~
                                  %s
try/main_test_proto.c:3298:33: warning: 'S' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %s%d%p%%%S%D%i%o%O%u%U%x%X%c%C\n","bonjour", 42, &c, L"暖炉", LONG_MAX, 42, 42, 42, 100000, ULONG_MAX, 42, 42, 'c', L'플');
                                      ~^
try/main_test_proto.c:3298:35: warning: 'D' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %s%d%p%%%S%D%i%o%O%u%U%x%X%c%C\n","bonjour", 42, &c, L"暖炉", LONG_MAX, 42, 42, 42, 100000, ULONG_MAX, 42, 42, 'c', L'플');
                                        ~^
try/main_test_proto.c:3298:35: note: did you mean to use 'd'?
        ret1 = printf("orig : %s%d%p%%%S%D%i%o%O%u%U%x%X%c%C\n","bonjour", 42, &c, L"暖炉", LONG_MAX, 42, 42, 42, 100000, ULONG_MAX, 42, 42, 'c', L'플');
                                         ^
                                         d
try/main_test_proto.c:3298:88: warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
        ret1 = printf("orig : %s%d%p%%%S%D%i%o%O%u%U%x%X%c%C\n","bonjour", 42, &c, L"暖炉", LONG_MAX, 42, 42, 42, 100000, ULONG_MAX, 42, 42, 'c', L'플');
                                        ~~                                                  ^~~~~~~~
                                        %lD
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/8.0.0/include/limits.h:63:19: note: expanded from macro 'LONG_MAX'
#define LONG_MAX  __LONG_MAX__
                  ^~~~~~~~~~~~
<built-in>:34:22: note: expanded from here
#define __LONG_MAX__ 9223372036854775807L
                     ^~~~~~~~~~~~~~~~~~~~
try/main_test_proto.c:3298:41: warning: 'O' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %s%d%p%%%S%D%i%o%O%u%U%x%X%c%C\n","bonjour", 42, &c, L"暖炉", LONG_MAX, 42, 42, 42, 100000, ULONG_MAX, 42, 42, 'c', L'플');
                                              ~^
try/main_test_proto.c:3298:41: note: did you mean to use 'o'?
        ret1 = printf("orig : %s%d%p%%%S%D%i%o%O%u%U%x%X%c%C\n","bonjour", 42, &c, L"暖炉", LONG_MAX, 42, 42, 42, 100000, ULONG_MAX, 42, 42, 'c', L'플');
                                               ^
                                               o
try/main_test_proto.c:3298:45: warning: 'U' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %s%d%p%%%S%D%i%o%O%u%U%x%X%c%C\n","bonjour", 42, &c, L"暖炉", LONG_MAX, 42, 42, 42, 100000, ULONG_MAX, 42, 42, 'c', L'플');
                                                  ~^
try/main_test_proto.c:3298:45: note: did you mean to use 'u'?
        ret1 = printf("orig : %s%d%p%%%S%D%i%o%O%u%U%x%X%c%C\n","bonjour", 42, &c, L"暖炉", LONG_MAX, 42, 42, 42, 100000, ULONG_MAX, 42, 42, 'c', L'플');
                                                   ^
                                                   u
try/main_test_proto.c:3298:118: warning: format specifies type 'unsigned int' but the argument has type 'unsigned long' [-Wformat]
        ret1 = printf("orig : %s%d%p%%%S%D%i%o%O%u%U%x%X%c%C\n","bonjour", 42, &c, L"暖炉", LONG_MAX, 42, 42, 42, 100000, ULONG_MAX, 42, 42, 'c', L'플');
                                                  ~~                                                                      ^~~~~~~~~
                                                  %lU
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/8.0.0/include/limits.h:73:19: note: expanded from macro 'ULONG_MAX'
#define ULONG_MAX (__LONG_MAX__ *2UL+1UL)
                  ^~~~~~~~~~~~~~~~~~~~~~~
try/main_test_proto.c:3298:53: warning: 'C' conversion specifier is not supported by ISO C [-Wformat-non-iso]
        ret1 = printf("orig : %s%d%p%%%S%D%i%o%O%u%U%x%X%c%C\n","bonjour", 42, &c, L"暖炉", LONG_MAX, 42, 42, 42, 100000, ULONG_MAX, 42, 42, 'c', L'플');
                                                          ~^
try/main_test_proto.c:3293:9: warning: unused variable 'a' [-Wunused-variable]
        size_t a = LONG_MAX;
               ^
try/main_test_proto.c:3290:6: warning: no previous prototype for function 'mutant_09' [-Wmissing-prototypes]
void    mutant_09(void)
        ^
try/main_test_proto.c:3310:6: warning: no previous prototype for function 'test_s' [-Wmissing-prototypes]
void    test_s(void)
        ^
try/main_test_proto.c:3328:6: warning: no previous prototype for function 'test_ls' [-Wmissing-prototypes]
void    test_ls(void)
        ^
try/main_test_proto.c:3342:7: warning: no previous prototype for function 'test_d' [-Wmissing-prototypes]
void    test_d(void)
        ^
try/main_test_proto.c:3388:7: warning: no previous prototype for function 'test_ld' [-Wmissing-prototypes]
void    test_ld(void)
        ^
try/main_test_proto.c:3408:7: warning: no previous prototype for function 'test_x' [-Wmissing-prototypes]
void    test_x(void)
        ^
try/main_test_proto.c:3444:6: warning: no previous prototype for function 'test_lx' [-Wmissing-prototypes]
void test_lx(void)
     ^
try/main_test_proto.c:3458:7: warning: no previous prototype for function 'test_i' [-Wmissing-prototypes]
void    test_i(void)
        ^
try/main_test_proto.c:3471:7: warning: no previous prototype for function 'test_o' [-Wmissing-prototypes]
void    test_o(void)
        ^
try/main_test_proto.c:3490:6: warning: no previous prototype for function 'test_lo' [-Wmissing-prototypes]
void    test_lo(void)
        ^
try/main_test_proto.c:3505:6: warning: no previous prototype for function 'test_u' [-Wmissing-prototypes]
void    test_u(void)
        ^
try/main_test_proto.c:3528:6: warning: no previous prototype for function 'test_lu' [-Wmissing-prototypes]
void    test_lu(void)
        ^
try/main_test_proto.c:3539:6: warning: no previous prototype for function 'test_p' [-Wmissing-prototypes]
void    test_p(void)
        ^
try/main_test_proto.c:3547:6: warning: no previous prototype for function 'test_c' [-Wmissing-prototypes]
void    test_c(void)
        ^
try/main_test_proto.c:3564:6: warning: no previous prototype for function 'test_lc' [-Wmissing-prototypes]
void    test_lc(void)
        ^
try/main_test_proto.c:3577:6: warning: no previous prototype for function 'test_modulo' [-Wmissing-prototypes]
void    test_modulo(void)
        ^
try/main_test_proto.c:3588:6: warning: no previous prototype for function 'test_b' [-Wmissing-prototypes]
void    test_b(void)
        ^
try/main_test_proto.c:3602:7: warning: no previous prototype for function 'mutant_test' [-Wmissing-prototypes]
void    mutant_test(void)
        ^
324 warnings generated.
In file included from ft_printf.c:14:
includes/ft_printf.h:76:6: warning: padding struct 'struct s_print' with 3 bytes to align 'base_size' [-Wpadded]
        int base_size;
            ^
includes/ft_printf.h:80:6: warning: padding struct 'struct s_print' with 3 bytes to align 'pitch_nb' [-Wpadded]
        int pitch_nb;
            ^
2 warnings generated.
In file included from parsing.c:14:
includes/ft_printf.h:76:6: warning: padding struct 'struct s_print' with 3 bytes to align 'base_size' [-Wpadded]
        int base_size;
            ^
includes/ft_printf.h:80:6: warning: padding struct 'struct s_print' with 3 bytes to align 'pitch_nb' [-Wpadded]
        int pitch_nb;
            ^
parsing.c:56:17: warning: cast from 'const char *' to 'char *' drops const qualifier [-Wcast-qual]
        return((char *)format);
                       ^
parsing.c:50:7: warning: no previous prototype for function 'parsing_end' [-Wmissing-prototypes]
char    *parsing_end(const char *format)
         ^
parsing.c:59:6: warning: no previous prototype for function 'parsing_0' [-Wmissing-prototypes]
void    parsing_0(const char *format, t_print *dna, char *end)
        ^
parsing.c:72:47: warning: unused parameter 'dna' [-Wunused-parameter]
bool    parsing_pls(const char *format, t_print *dna, char *end)
                                                 ^
parsing.c:72:6: warning: no previous prototype for function 'parsing_pls' [-Wmissing-prototypes]
bool    parsing_pls(const char *format, t_print *dna, char *end)
        ^
parsing.c:83:6: warning: no previous prototype for function 'parsing_width' [-Wmissing-prototypes]
void    parsing_width(const char *format, t_print *dna, char *end)
        ^
parsing.c:164:14: warning: implicit conversion loses integer precision: 'long' to 'int' [-Wshorten-64-to-32]
        return (end - format);
        ~~~~~~  ~~~~^~~~~~~~
parsing.c:190:6: warning: no previous prototype for function 'pitch_nb' [-Wmissing-prototypes]
void    pitch_nb(const char *format, t_print *dna, char *end)
        ^
parsing.c:213:6: warning: no previous prototype for function 'pitch_star' [-Wmissing-prototypes]
void    pitch_star(const char *format, t_print *dna, char *end)
        ^
11 warnings generated.
parsing_cast.c:15:6: warning: no previous prototype for function 'parsing_h_hh' [-Wmissing-prototypes]
void    parsing_h_hh(const char *format, t_print *dna, char *end)
        ^
In file included from parsing_cast.c:13:
includes/ft_printf.h:76:6: warning: padding struct 'struct s_print' with 3 bytes to align 'base_size' [-Wpadded]
        int base_size;
            ^
includes/ft_printf.h:80:6: warning: padding struct 'struct s_print' with 3 bytes to align 'pitch_nb' [-Wpadded]
        int pitch_nb;
            ^
parsing_cast.c:44:6: warning: no previous prototype for function 'parsing_l_ll' [-Wmissing-prototypes]
void    parsing_l_ll(const char *format, t_print *dna, char *end)
        ^
parsing_cast.c:73:6: warning: no previous prototype for function 'parsing_z' [-Wmissing-prototypes]
void    parsing_z(const char *format, t_print *dna, char *end)
        ^
parsing_cast.c:83:6: warning: no previous prototype for function 'parsing_j' [-Wmissing-prototypes]
void    parsing_j(const char *format, t_print *dna, char *end)
        ^
6 warnings generated.
compute_conv.c:15:7: warning: no previous prototype for function 'compute_conv_s' [-Wmissing-prototypes]
char    *compute_conv_s (t_print *dna, va_list ap)
         ^
compute_conv.c:36:19: warning: implicit conversion loses integer precision: 'size_t' (aka 'unsigned long') to 'int' [-Wshorten-64-to-32]
        dna->base_size = ft_strlen(tmp);
                       ~ ^~~~~~~~~~~~~~
In file included from compute_conv.c:13:
includes/ft_printf.h:76:6: warning: padding struct 'struct s_print' with 3 bytes to align 'base_size' [-Wpadded]
        int base_size;
            ^
includes/ft_printf.h:80:6: warning: padding struct 'struct s_print' with 3 bytes to align 'pitch_nb' [-Wpadded]
        int pitch_nb;
            ^
compute_conv.c:63:57: warning: implicit conversion changes signedness: 'int' to 'unsigned long' [-Wsign-conversion]
                dna->out = (char *)ft_memalloc(sizeof(wchar_t) * dna->width);
                                                               ~ ~~~~~^~~~~
compute_conv.c:65:7: warning: cast from 'char *' to 'wchar_t *' (aka 'int *') increases required alignment from 1 to 4 [-Wcast-align]
                        *(((wchar_t *)dna->out) + i++) = L' ';
                           ^~~~~~~~~~~~~~~~~~~
compute_conv.c:66:14: warning: cast from 'char *' to 'wchar_t *' (aka 'int *') increases required alignment from 1 to 4 [-Wcast-align]
                ft_memcpy(((wchar_t *)dna->out) + (dna->width - count_unicode(tmp)), tmp, (int)count_unicode(tmp) * sizeof(wchar_t));
                           ^~~~~~~~~~~~~~~~~~~
compute_conv.c:66:43: warning: implicit conversion changes signedness: 'int' to 'unsigned long' [-Wsign-conversion]
                ft_memcpy(((wchar_t *)dna->out) + (dna->width - count_unicode(tmp)), tmp, (int)count_unicode(tmp) * sizeof(wchar_t));
                                                   ~~~~~^~~~~ ~
compute_conv.c:66:77: warning: implicit conversion changes signedness: 'int' to 'unsigned long' [-Wsign-conversion]
                ft_memcpy(((wchar_t *)dna->out) + (dna->width - count_unicode(tmp)), tmp, (int)count_unicode(tmp) * sizeof(wchar_t));
                                                                                          ^~~~~~~~~~~~~~~~~~~~~~~ ~
compute_conv.c:70:77: warning: implicit conversion changes signedness: 'int' to 'unsigned long' [-Wsign-conversion]
                dna->out = (char *)ft_memalloc(sizeof(wchar_t) * ((int)count_unicode(tmp) + 1));
                                                               ~  ~~~~~~~~~~~~~~~~~~~~~~~~^~~
compute_conv.c:71:71: warning: implicit conversion changes signedness: 'int' to 'unsigned long' [-Wsign-conversion]
                ft_memcpy(dna->out, tmp, sizeof(wchar_t) * ((int)count_unicode(tmp) + 1));
                                                         ~  ~~~~~~~~~~~~~~~~~~~~~~~~^~~
compute_conv.c:74:12: warning: cast from 'char *' to 'wchar_t *' (aka 'int *') increases required alignment from 1 to 4 [-Wcast-align]
        while (*(((wchar_t *)dna->out) + i) != '\0')
                  ^~~~~~~~~~~~~~~~~~~
compute_conv.c:76:18: warning: cast from 'char *' to 'wchar_t *' (aka 'int *') increases required alignment from 1 to 4 [-Wcast-align]
                ft_putwchar(*(((wchar_t *)dna->out) + i));
                               ^~~~~~~~~~~~~~~~~~~
compute_conv.c:79:26: warning: cast from 'char *' to 'wchar_t *' (aka 'int *') increases required alignment from 1 to 4 [-Wcast-align]
        dna->ret_nb += wstrlen ((wchar_t*)dna->out);
                                ^~~~~~~~~~~~~~~~~~
compute_conv.c:44:6: warning: no previous prototype for function 'compute_conv_ls' [-Wmissing-prototypes]
void    compute_conv_ls (t_print *dna, va_list ap)
        ^
compute_conv.c:84:7: warning: no previous prototype for function 'compute_conv_p' [-Wmissing-prototypes]
char    *compute_conv_p(t_print *dna, va_list ap)
         ^
compute_conv.c:111:34: warning: implicit conversion changes signedness: 'intmax_t' (aka 'long') to 'uintmax_t' (aka 'unsigned long') [-Wsign-conversion]
        if (!(dna->out = ft_itoa_printf(nb, 10)))
                         ~~~~~~~~~~~~~~ ^~
compute_conv.c:103:6: warning: no previous prototype for function 'compute_conv_d' [-Wmissing-prototypes]
void    compute_conv_d(t_print *dna, va_list ap)
        ^
compute_conv.c:116:19: warning: implicit conversion loses integer precision: 'size_t' (aka 'unsigned long') to 'int' [-Wshorten-64-to-32]
        dna->base_size = ft_strlen(dna->out);
                       ~ ^~~~~~~~~~~~~~~~~~~
compute_conv.c:139:34: warning: implicit conversion changes signedness: 'intmax_t' (aka 'long') to 'uintmax_t' (aka 'unsigned long') [-Wsign-conversion]
        if (!(dna->out = ft_itoa_printf(nb, 10)))
                         ~~~~~~~~~~~~~~ ^~
compute_conv.c:127:6: warning: no previous prototype for function 'compute_conv_ld' [-Wmissing-prototypes]
void    compute_conv_ld(t_print *dna, va_list ap)
        ^
compute_conv.c:145:19: warning: implicit conversion loses integer precision: 'size_t' (aka 'unsigned long') to 'int' [-Wshorten-64-to-32]
        dna->base_size = ft_strlen(dna->out);
                       ~ ^~~~~~~~~~~~~~~~~~~
compute_conv.c:156:7: warning: no previous prototype for function 'compute_conv_o' [-Wmissing-prototypes]
void    compute_conv_o(t_print *dna, va_list ap)
        ^
compute_conv.c:170:19: warning: implicit conversion loses integer precision: 'size_t' (aka 'unsigned long') to 'int' [-Wshorten-64-to-32]
        dna->base_size = ft_strlen(dna->out);
                       ~ ^~~~~~~~~~~~~~~~~~~
compute_conv.c:182:7: warning: implicit conversion changes signedness: 'intmax_t' (aka 'long') to 'uintmax_t' (aka 'unsigned long') [-Wsign-conversion]
        nb = exec_cast_unsigned(dna, ap);
           ~ ^~~~~~~~~~~~~~~~~~~~~~~~~~~
compute_conv.c:177:6: warning: no previous prototype for function 'compute_conv_u' [-Wmissing-prototypes]
void    compute_conv_u(t_print *dna, va_list ap)
        ^
compute_conv.c:194:6: warning: no previous prototype for function 'compute_conv_lu' [-Wmissing-prototypes]
void    compute_conv_lu(t_print *dna, va_list ap)
        ^
compute_conv.c:278:28: warning: implicit conversion changes signedness: 'intmax_t' (aka 'long') to 'uintmax_t' (aka 'unsigned long') [-Wsign-conversion]
        dna->out = ft_itoa_printf(ret, 16);
                   ~~~~~~~~~~~~~~ ^~~
compute_conv.c:288:18: warning: implicit conversion loses integer precision: 'int' to 'char' [-Wconversion]
                        dna->out[i] = ft_toupper(dna->out[i]);
                                    ~ ^~~~~~~~~~~~~~~~~~~~~~~
compute_conv.c:266:6: warning: no previous prototype for function 'compute_conv_x' [-Wmissing-prototypes]
void    compute_conv_x(t_print *dna, va_list ap)
        ^
compute_conv.c:281:19: warning: implicit conversion loses integer precision: 'size_t' (aka 'unsigned long') to 'int' [-Wshorten-64-to-32]
        dna->base_size = ft_strlen(dna->out);
                       ~ ^~~~~~~~~~~~~~~~~~~
compute_conv.c:313:6: warning: implicit conversion loses integer precision: 'int' to 'char' [-Wconversion]
        c = va_arg(ap, int);
          ~ ^~~~~~~~~~~~~~~
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/8.0.0/include/stdarg.h:35:29: note: expanded from macro 'va_arg'
#define va_arg(ap, type)    __builtin_va_arg(ap, type)
                            ^~~~~~~~~~~~~~~~~~~~~~~~~~
compute_conv.c:326:18: warning: implicit conversion changes signedness: 'int' to 'unsigned long' [-Wsign-conversion]
                dna->ret_nb += (int)ft_strlen(dna->out);
                            ~~ ^~~~~~~~~~~~~~~~~~~~~~~~
compute_conv.c:309:7: warning: no previous prototype for function 'compute_conv_c' [-Wmissing-prototypes]
char    *compute_conv_c (t_print *dna, va_list ap)
         ^
compute_conv.c:333:46: warning: unused parameter 'ap' [-Wunused-parameter]
char    *compute_conv_mod(t_print *dna, va_list ap)
                                                ^
compute_conv.c:333:7: warning: no previous prototype for function 'compute_conv_mod' [-Wmissing-prototypes]
char    *compute_conv_mod(t_print *dna, va_list ap)
         ^
compute_conv.c:351:28: warning: implicit conversion changes signedness: 'intmax_t' (aka 'long') to 'uintmax_t' (aka 'unsigned long') [-Wsign-conversion]
        dna->out = ft_itoa_printf(n, 2);
                   ~~~~~~~~~~~~~~ ^
compute_conv.c:345:7: warning: no previous prototype for function 'compute_conv_b' [-Wmissing-prototypes]
char    *compute_conv_b(t_print *dna, va_list ap)
         ^
compute_conv.c:362:6: warning: no previous prototype for function 'conv_switch' [-Wmissing-prototypes]
void    conv_switch(t_print *dna, va_list ap)
        ^
39 warnings generated.
casting.c:15:10: warning: no previous prototype for function 'cast_default' [-Wmissing-prototypes]
intmax_t        cast_default(t_print *dna, va_list ap)
                ^
In file included from casting.c:13:
includes/ft_printf.h:76:6: warning: padding struct 'struct s_print' with 3 bytes to align 'base_size' [-Wpadded]
        int base_size;
            ^
includes/ft_printf.h:80:6: warning: padding struct 'struct s_print' with 3 bytes to align 'pitch_nb' [-Wpadded]
        int pitch_nb;
            ^
casting.c:113:10: warning: no previous prototype for function 'cast_c' [-Wmissing-prototypes]
intmax_t        cast_c(t_print *dna, va_list ap)
                ^
4 warnings generated.
ft_itoa_printf.c:15:6: warning: no previous prototype for function 'ft_swapchar' [-Wmissing-prototypes]
void    ft_swapchar(char *a, char *b)
        ^
ft_itoa_printf.c:24:6: warning: no previous prototype for function 'ft_strrev' [-Wmissing-prototypes]
void    ft_strrev(char *str)
        ^
ft_itoa_printf.c:30:21: warning: implicit conversion loses integer precision: 'unsigned long' to 'int' [-Wshorten-64-to-32]
        j = ft_strlen(str) - 1;
          ~ ~~~~~~~~~~~~~~~^~~
ft_itoa_printf.c:52:11: warning: implicit conversion changes signedness: 'int' to 'unsigned long' [-Wsign-conversion]
                if (n % base > 9)
                      ~ ^~~~
ft_itoa_printf.c:53:24: warning: implicit conversion loses integer precision: 'unsigned long' to 'char' [-Wconversion]
                        str[i] = (n % base) + ('a' - 10);
                               ~ ~~~~~~~~~~~^~~~~~~~~~~~
ft_itoa_printf.c:53:18: warning: implicit conversion changes signedness: 'int' to 'unsigned long' [-Wsign-conversion]
                        str[i] = (n % base) + ('a' - 10);
                                    ~ ^~~~
ft_itoa_printf.c:55:24: warning: implicit conversion loses integer precision: 'unsigned long' to 'char' [-Wconversion]
                        str[i] = (n % base) + '0';
                               ~ ~~~~~~~~~~~^~~~~
ft_itoa_printf.c:55:18: warning: implicit conversion changes signedness: 'int' to 'unsigned long' [-Wsign-conversion]
                        str[i] = (n % base) + '0';
                                    ~ ^~~~
ft_itoa_printf.c:56:11: warning: implicit conversion changes signedness: 'int' to 'unsigned long' [-Wsign-conversion]
                n = n / base;
                      ~ ^~~~
9 warnings generated.
parsing_converter.c:61:19: warning: cast from 'const char *' to 'char *' drops const qualifier [-Wcast-qual]
                        return ((char*)format + 1);
                                       ^
parsing_converter.c:65:19: warning: cast from 'const char *' to 'char *' drops const qualifier [-Wcast-qual]
                        return ((char*)format);
                                       ^
parsing_converter.c:70:17: warning: cast from 'const char *' to 'char *' drops const qualifier [-Wcast-qual]
        return ((char*)format);
                       ^
In file included from parsing_converter.c:14:
includes/ft_printf.h:76:6: warning: padding struct 'struct s_print' with 3 bytes to align 'base_size' [-Wpadded]
        int base_size;
            ^
includes/ft_printf.h:80:6: warning: padding struct 'struct s_print' with 3 bytes to align 'pitch_nb' [-Wpadded]
        int pitch_nb;
            ^
5 warnings generated.
In file included from reset_print.c:13:
includes/ft_printf.h:76:6: warning: padding struct 'struct s_print' with 3 bytes to align 'base_size' [-Wpadded]
        int base_size;
            ^
includes/ft_printf.h:80:6: warning: padding struct 'struct s_print' with 3 bytes to align 'pitch_nb' [-Wpadded]
        int pitch_nb;
            ^
2 warnings generated.
unicode.c:37:10: warning: implicit conversion changes signedness: 'int' to 'size_t' (aka 'unsigned long') [-Wsign-conversion]
        return (ret);
        ~~~~~~  ^~~
1 warning generated.
ft_itoa_signed.c:34:25: warning: implicit conversion changes signedness: 'int' to 'size_t' (aka 'unsigned long') [-Wsign-conversion]
        str = ft_strnew(digits + neg);
              ~~~~~~~~~ ~~~~~~~^~~~~
ft_itoa_signed.c:48:14: warning: implicit conversion loses integer precision: 'unsigned long long' to 'char' [-Wconversion]
                *str = '0' + nb;
                     ~ ~~~~^~~~
ft_itoa_signed.c:59:7: warning: implicit conversion changes signedness: 'long long' to 'unsigned long long' [-Wsign-conversion]
        nb = n;
           ~ ^
ft_itoa_signed.c:64:32: warning: implicit conversion changes signedness: 'int' to 'unsigned long long' [-Wsign-conversion]
                nb = (unsigned long long)n * -1;
                                           ~ ^~
4 warnings generated.
pitch.c:34:13: warning: implicit conversion changes signedness: 'int' to 'unsigned long' [-Wsign-conversion]
        pos = dna->pitch_nb - ft_strlen(dna->out);
              ~~~~~^~~~~~~~ ~
pitch.c:35:67: warning: implicit conversion changes signedness: 'int' to 'unsigned long' [-Wsign-conversion]
        if(!(dna->out = (char*)ft_memalloc(sizeof(char) * (dna->pitch_nb + 1))))
                                                        ~  ~~~~~~~~~~~~~~^~~
pitch.c:37:32: warning: implicit conversion changes signedness: 'int' to 'size_t' (aka 'unsigned long') [-Wsign-conversion]
        ft_memset(dna->out, '0', dna->pitch_nb);
        ~~~~~~~~~                ~~~~~^~~~~~~~
pitch.c:34:22: warning: implicit conversion loses integer precision: 'unsigned long' to 'int' [-Wshorten-64-to-32]
        pos = dna->pitch_nb - ft_strlen(dna->out);
            ~ ~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~
In file included from pitch.c:13:
includes/ft_printf.h:76:6: warning: padding struct 'struct s_print' with 3 bytes to align 'base_size' [-Wpadded]
        int base_size;
            ^
includes/ft_printf.h:80:6: warning: padding struct 'struct s_print' with 3 bytes to align 'pitch_nb' [-Wpadded]
        int pitch_nb;
            ^
pitch.c:50:67: warning: implicit conversion changes signedness: 'int' to 'unsigned long' [-Wsign-conversion]
        if(!(dna->out = (char*)ft_memalloc(sizeof(char) * (dna->pitch_nb + 1))))
                                                        ~  ~~~~~~~~~~~~~~^~~
pitch.c:52:32: warning: implicit conversion changes signedness: 'int' to 'size_t' (aka 'unsigned long') [-Wsign-conversion]
        ft_memcpy(dna->out, tmp, dna->pitch_nb);
        ~~~~~~~~~                ~~~~~^~~~~~~~
pitch.c:43:7: warning: no previous prototype for function 'compute_pitch_nb_cut' [-Wmissing-prototypes]
char    *compute_pitch_nb_cut(t_print *dna)
         ^
pitch.c:79:36: warning: unused parameter 'dna' [-Wunused-parameter]
void    compute_pitch_dollar(t_print *dna)
                                      ^
pitch.c:79:6: warning: no previous prototype for function 'compute_pitch_dollar' [-Wmissing-prototypes]
void    compute_pitch_dollar(t_print *dna)
        ^
pitch.c:90:34: warning: unused parameter 'dna' [-Wunused-parameter]
void    compute_pitch_star(t_print *dna)
                                    ^
12 warnings generated.
prefix.c:25:47: warning: implicit conversion changes signedness: 'int' to 'unsigned long' [-Wsign-conversion]
        dna->out = (char*)ft_memalloc(sizeof(char) * size);
                                                   ~ ^~~~
prefix.c:22:49: warning: implicit conversion loses integer precision: 'unsigned long' to 'int' [-Wshorten-64-to-32]
        size = ft_strlen(dna->out) + prefix_count(dna) + 1;
             ~ ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^~~
In file included from prefix.c:13:
includes/ft_printf.h:76:6: warning: padding struct 'struct s_print' with 3 bytes to align 'base_size' [-Wpadded]
        int base_size;
            ^
includes/ft_printf.h:80:6: warning: padding struct 'struct s_print' with 3 bytes to align 'pitch_nb' [-Wpadded]
        int pitch_nb;
            ^
prefix.c:36:8: warning: unused variable 'tmp' [-Wunused-variable]
        char    *tmp;
                 ^
prefix.c:37:7: warning: unused variable 'size' [-Wunused-variable]
        int             size;
                        ^
prefix.c:49:14: warning: implicit conversion changes signedness: 'int' to 'unsigned long' [-Wsign-conversion]
        size = dna->base_size + prefix_count(dna) + 1;
               ~~~~~^~~~~~~~~ ~
prefix.c:51:47: warning: implicit conversion changes signedness: 'int' to 'unsigned long' [-Wsign-conversion]
        dna->out = (char*)ft_memalloc(sizeof(char) * size);
                                                   ~ ^~~~
prefix.c:54:52: warning: implicit conversion changes signedness: 'int' to 'size_t' (aka 'unsigned long') [-Wsign-conversion]
        ft_memcpy(dna->out + prefix_count(dna), tmp, dna->base_size);
        ~~~~~~~~~                                    ~~~~~^~~~~~~~~
prefix.c:48:7: warning: unused variable 'start' [-Wunused-variable]
        int             start;
                        ^
prefix.c:49:44: warning: implicit conversion loses integer precision: 'unsigned long' to 'int' [-Wshorten-64-to-32]
        size = dna->base_size + prefix_count(dna) + 1;
             ~ ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^~~
prefix.c:61:8: warning: unused variable 'tmp' [-Wunused-variable]
        char    *tmp;
                 ^
prefix.c:80:9: warning: implicit conversion changes signedness: 'int' to 'unsigned long' [-Wsign-conversion]
        size = (int)ft_strlen(dna->out) + prefix_count(dna);
               ^~~~~~~~~~~~~~~~~~~~~~~~ ~
prefix.c:81:53: warning: implicit conversion changes signedness: 'int' to 'unsigned long' [-Wsign-conversion]
        dna->out = (char*)ft_memalloc(sizeof(char) * (size + 1));
                                                   ~  ~~~~~^~~
prefix.c:80:34: warning: implicit conversion loses integer precision: 'unsigned long' to 'int' [-Wshorten-64-to-32]
        size = (int)ft_strlen(dna->out) + prefix_count(dna);
             ~ ~~~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~
prefix.c:149:9: warning: implicit conversion changes signedness: 'int' to 'uintmax_t' (aka 'unsigned long') [-Wsign-conversion]
        size = (int)ft_strlen(dna->out);
             ~ ^~~~~~~~~~~~~~~~~~~~~~~~
16 warnings generated.
width.c:38:59: warning: implicit conversion changes signedness: 'int' to 'unsigned long' [-Wsign-conversion]
        dna->out = (char*)ft_memalloc(sizeof(char) * (dna->width + 1));
                                                   ~  ~~~~~~~~~~~^~~
width.c:41:32: warning: implicit conversion changes signedness: 'int' to 'size_t' (aka 'unsigned long') [-Wsign-conversion]
        ft_memset(dna->out, ' ', dna->width);
        ~~~~~~~~~                ~~~~~^~~~~
width.c:43:28: warning: implicit conversion changes signedness: 'int' to 'size_t' (aka 'unsigned long') [-Wsign-conversion]
                ft_memcpy(dna->out, tmp, size);
                ~~~~~~~~~                ^~~~
width.c:45:50: warning: implicit conversion changes signedness: 'int' to 'size_t' (aka 'unsigned long') [-Wsign-conversion]
                ft_memcpy(dna->out + (dna->width - size), tmp, size);
                ~~~~~~~~~                                      ^~~~
width.c:31:7: warning: no previous prototype for function 'do_width_with_pitch' [-Wmissing-prototypes]
char    *do_width_with_pitch(t_print *dna)
         ^
width.c:37:9: warning: implicit conversion loses integer precision: 'size_t' (aka 'unsigned long') to 'int' [-Wshorten-64-to-32]
        size = ft_strlen(dna->out);
             ~ ^~~~~~~~~~~~~~~~~~~
In file included from width.c:13:
includes/ft_printf.h:76:6: warning: padding struct 'struct s_print' with 3 bytes to align 'base_size' [-Wpadded]
        int base_size;
            ^
includes/ft_printf.h:80:6: warning: padding struct 'struct s_print' with 3 bytes to align 'pitch_nb' [-Wpadded]
        int pitch_nb;
            ^
width.c:56:14: warning: implicit conversion changes signedness: 'int' to 'unsigned long' [-Wsign-conversion]
        size = dna->width - (dna->base_size + prefix_count(dna));
               ~~~~~^~~~~ ~
width.c:56:28: warning: implicit conversion changes signedness: 'int' to 'unsigned long' [-Wsign-conversion]
        size = dna->width - (dna->base_size + prefix_count(dna));
                             ~~~~~^~~~~~~~~ ~
width.c:63:59: warning: implicit conversion changes signedness: 'int' to 'unsigned long' [-Wsign-conversion]
        dna->out = (char*)ft_memalloc(sizeof(char) * (dna->width + 1));
                                                   ~  ~~~~~~~~~~~^~~
width.c:66:30: warning: implicit conversion changes signedness: 'int' to 'size_t' (aka 'unsigned long') [-Wsign-conversion]
        ft_memset(dna->out, c, dna->width);
        ~~~~~~~~~              ~~~~~^~~~~
width.c:50:7: warning: no previous prototype for function 'do_width_without_pitch' [-Wmissing-prototypes]
char    *do_width_without_pitch(t_print *dna)
         ^
width.c:56:20: warning: implicit conversion loses integer precision: 'unsigned long' to 'int' [-Wshorten-64-to-32]
        size = dna->width - (dna->base_size + prefix_count(dna));
             ~ ~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
width.c:83:65: warning: implicit conversion changes signedness: 'int' to 'unsigned long' [-Wsign-conversion]
        if (!(dna->out = (char*)ft_memalloc(sizeof(char) * (dna->width + 1))))
                                                         ~  ~~~~~~~~~~~^~~
width.c:85:30: warning: implicit conversion changes signedness: 'int' to 'size_t' (aka 'unsigned long') [-Wsign-conversion]
        ft_memset(dna->out, c, dna->width);
        ~~~~~~~~~              ~~~~~^~~~~
width.c:89:30: warning: implicit conversion changes signedness: 'int' to 'unsigned long' [-Wsign-conversion]
                ft_memcpy(dna->out + (dna->width - ft_strlen(tmp)), tmp,        ft_strlen(tmp));
                                      ~~~~~^~~~~ ~
width.c:81:26: warning: implicit conversion loses integer precision: 'size_t' (aka 'unsigned long') to 'int' [-Wshorten-64-to-32]
        pos = (prefix_in) ? 0 : prefix_count(dna);
            ~                   ^~~~~~~~~~~~~~~~~
18 warnings generated.
set_length.c:20:6: warning: comparison of integers of different signs: 'int' and 'size_t' (aka 'unsigned long') [-Wsign-compare]
        if (CHECK_PITCH)
            ^~~~~~~~~~~
includes/ft_printf.h:32:49: note: expanded from macro 'CHECK_PITCH'
#define CHECK_PITCH dna->pitch && dna->pitch_nb > ft_strlen(dna->out)
                                  ~~~~~~~~~~~~~ ^ ~~~~~~~~~~~~~~~~~~~
set_length.c:28:6: warning: comparison of integers of different signs: 'int' and 'size_t' (aka 'unsigned long') [-Wsign-compare]
        if (CHECK_WIDTH)
            ^~~~~~~~~~~
includes/ft_printf.h:33:46: note: expanded from macro 'CHECK_WIDTH'
#define CHECK_WIDTH dna->width && dna->width > ft_strlen(dna->out)
                                  ~~~~~~~~~~ ^ ~~~~~~~~~~~~~~~~~~~
includes/ft_printf.h:76:6: warning: padding struct 'struct s_print' with 3 bytes to align 'base_size' [-Wpadded]
        int base_size;
            ^
includes/ft_printf.h:80:6: warning: padding struct 'struct s_print' with 3 bytes to align 'pitch_nb' [-Wpadded]
        int pitch_nb;
            ^
set_length.c:93:17: warning: comparison of integers of different signs: 'int' and 'size_t' (aka 'unsigned long') [-Wsign-compare]
        if (dna->width > ft_strlen(dna->out))
            ~~~~~~~~~~ ^ ~~~~~~~~~~~~~~~~~~~
5 warnings generated.
flags.c:26:55: warning: implicit conversion changes signedness: 'int' to 'unsigned long' [-Wsign-conversion]
                        if (!(dna->out = (char*)ft_memalloc(sizeof(char) * size + 2)))
                                                                         ~ ^~~~
flags.c:28:33: warning: implicit conversion changes signedness: 'int' to 'size_t' (aka 'unsigned long') [-Wsign-conversion]
                        ft_memcpy(dna->out + 1, tmp, size);
                        ~~~~~~~~~                    ^~~~
flags.c:21:9: warning: implicit conversion loses integer precision: 'size_t' (aka 'unsigned long') to 'int' [-Wshorten-64-to-32]
        size = ft_strlen(dna->out);
             ~ ^~~~~~~~~~~~~~~~~~~
In file included from flags.c:13:
includes/ft_printf.h:76:6: warning: padding struct 'struct s_print' with 3 bytes to align 'base_size' [-Wpadded]
        int base_size;
            ^
includes/ft_printf.h:80:6: warning: padding struct 'struct s_print' with 3 bytes to align 'pitch_nb' [-Wpadded]
        int pitch_nb;
            ^
5 warnings generated.
