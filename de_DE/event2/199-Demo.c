          void entrypoint_199_00() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 1, line: 27 */ "Das steht mir doch, oder?<pause 30>\n[1-]Klar doch![2-]Hm...[3-]Na ja...")
/*<  2>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 37}
          }

          void entrypoint_199_01() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 1, unk: 1, line: 73 */ "Was da wohl passiert ist?\nVielleicht hat es sich ja verflogen,\ndas blöde Vieh?<pause 30>\n\n[1-]Ich werde\ngewinnen![2-]Mein Vogel![3-]Deine Frisur...")
/*<  8>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 37}
          }

          void entrypoint_199_02() {
/*<  3>*/ 	start()
/*<  4>*/ 	printf(/* textboxtype: 1, unk: 1, line: 174 */ "Beweise mir, dass die Offenbarungen\ntatsächlich wahr sind... Ich bitte dich,\n<heroname>...<pause 30>\n[1-]Ich werde\ndas schaffen![2-]Ich will nicht...[3-]Das klingt\nschwierig...")
/*<  5>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 37}
          }

          void entrypoint_199_71() {
/*< 12>*/ 	start()
/*< 13>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 14, 'param3': 58}
/*< 14>*/ 	open_dowsing_wheel(4)
          	flw_21:
/*< 21>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_199_03() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 1, unk: 1, line: 116 */ "<0x10006:0xfecd>Du weißt, was du jetzt tun musst...<pause 15>\nOder etwa nicht?<pause 30> \n\n\n[1-]Keine Ahnung...[2-]Ich habe\nAngst...[3-]Ja, klar!")
/*< 11>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 37}
          }

          void entrypoint_199_72() {
/*< 15>*/ 	start()
/*< 16>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 17, 'param3': 58}
/*< 17>*/ 	open_dowsing_wheel(6)
          	goto flw_21
          }

          void entrypoint_199_73() {
/*< 18>*/ 	start()
/*< 19>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 20, 'param3': 58}
/*< 20>*/ 	open_dowsing_wheel(8)
          	goto flw_21
          }

