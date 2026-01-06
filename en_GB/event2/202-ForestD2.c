          void entrypoint_202_04() {
/*< 44>*/ 	start()
/*< 45>*/ 	printf(/* textboxtype: 7, unk: 0, line: 5 */ "A gemstone shines deep within\nthe eye. Strike it to shut the\nmouth and dam the flow.")
          }

          void entrypoint_202_05() {
/*< 46>*/ 	start()
/*< 47>*/ 	printf(/* textboxtype: 7, unk: 0, line: 2 */ "Carved into the <color red<great statue\n>coloroff>are inscriptions of gratitude.\nThey reveal the <color red<secret order >coloroff>of\nthis temple.\nFirst the <color red<back>coloroff>, then the <color red<rear>coloroff>,\nthen the <color red<back of the right hand>coloroff>,\nand finally the <color red<back of the left\nhand>coloroff>.")
/*< 48>*/ 	story_flags[1195 /* us: 805A9B61 0x02, jp: 805ACDE1 0x02 */] = true;
          }

          void entrypoint_202_11() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 2, unk: 0, line: 9 */ "Based on the patterns we have seen\nso far, I believe the <color red<key >coloroff>mentioned on\nthe stone marker is the <color red<key >coloroff>required\nto unlock the device ahead of us.")
          }

          void entrypoint_202_12() {
/*<  8>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 2, unk: 0, line: 10 */ "")
          }

          void entrypoint_202_13() {
/*<  9>*/ 	start()
/*< 12>*/ 	printf(/* textboxtype: 2, unk: 0, line: 11 */ "<0x10012:0x0000000b>Master, I have some important\ninformation that I am certain\nyou will want to hear. There is a\nlarge treasure chest in the area.\nThere is an 85% probability it\ncontains the <color red<key >coloroff>that will open the \ndoor we observed at the top of the\nstone statue.")
          }

          void entrypoint_202_30() {
/*< 14>*/ 	start()
/*< 40>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1007, 'next': 17, 'param3': 24}
/*< 17>*/ 	set_camera(1, 0)
/*< 28>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 13, 'next': 32, 'param3': 32}
/*< 32>*/ 	{'type': 'type3', 'subType': 1, 'param1': 13, 'param2': -1, 'next': 38, 'param3': 16}
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 1, 'next': 25, 'param3': 40}
/*< 25>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3330, 'param2': 256, 'next': 18, 'param3': 13}
/*< 18>*/ 	set_camera(2, 0)
/*< 36>*/ 	wait_frames(30)
/*< 33>*/ 	make_actor_do_something(0, 13)
/*< 35>*/ 	wait_frames(30)
/*< 26>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3331, 'param2': 512, 'next': 15, 'param3': 13}
/*< 15>*/ 	printf(/* textboxtype: 1, unk: 0, line: 17 */ "You certainly are persistent.<pause 5>.<pause 5>.")
/*< 19>*/ 	set_camera(3, 0)
/*< 16>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "I'm terribly busy trying to find the\nclues that will help me revive the\ndemon king.")
/*< 20>*/ 	set_camera(4, 0)
/*< 30>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3334, 'param2': 512, 'next': 23, 'param3': 13}
/*< 23>*/ 	wait_frames(30)
/*< 22>*/ 	printf(/* textboxtype: 1, unk: 0, line: 19 */ "Your incessant buzzing around my\nhead like some irksome gadfly\nwhen I'm THIS busy is... Well, it's\nmaking me very disagreeable.")
/*< 34>*/ 	make_actor_do_something(1, 13)
/*< 37>*/ 	wait_frames(15)
/*< 27>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3332, 'param2': 768, 'next': 39, 'param3': 13}
/*< 39>*/ 	wait_frames(2)
/*< 21>*/ 	set_camera(5, 0)
/*< 29>*/ 	wait_frames(63)
/*< 31>*/ 	wait_frames(40)
/*< 41>*/ 	zone_temp_flags[18 /* 0x3 04 */] = true;
/*< 24>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': -1, 'param3': 42}
          }

          void entrypoint_202_14() {
/*< 10>*/ 	start()
/*< 42>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 13, 'param3': 46}
/*< 13>*/ 	printf(/* textboxtype: 2, unk: 0, line: 12 */ "<0x10012:0x00000001>Master, I have taken the liberty to\nconfirm that a door is located at\nthe uppermost section of this statue.\nThe lock is unfamiliar to me.")
/*< 43>*/ 	scene_flags[12 'Faron: Ancient Cistern'][107 /* 0xC 08 */] = true;
          }

          void entrypoint_202_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 7, unk: 0, line: 1 */ "Strike the <color red<gemstones pointing in\nfour directions >coloroff>wisely. The way\nwill only open for one who knows\nthe temple's <color red<secret order>coloroff>.")
          }

          void entrypoint_202_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 7, unk: 0, line: 3 */ "Return the stone giant to its\noriginal form, and descend\nbelow the earth again along\nthe thread.\nThere you will find the <color red<key >coloroff>to\nthe path ahead.")
          }

          void entrypoint_202_03() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 7, unk: 0, line: 4 */ "Look for the <color red<key >coloroff>that lies\nbeneath the earth.")
          }

