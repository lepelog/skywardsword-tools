          void entrypoint_199_00() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 1, line: 27 */ "<0x10006:0x01cd>Wat vind je? Hoe zie ik eruit?<pause 30>\n[1-]Prachtig! [2-]Eh...[3-]Leuk... kostuum.")
/*<  2>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 37}
          }

          void entrypoint_199_01() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 8, unk: 1, line: 73 */ "Zou hij verdwaald zijn omdat zijn kleine\nbrein in de war raakt van alle wolken? Of\nzou ie net zo'n slaapkop zijn als zijn baas?<pause 30>\n[1-]Daag je me uit?[2-]Geef hem terug![3-]Leuk kapsel.")
/*<  8>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 37}
          }

          void entrypoint_199_02() {
/*<  3>*/ 	start()
/*<  4>*/ 	printf(/* textboxtype: 1, unk: 1, line: 174 */ "Wat we vandaag hebben meegemaakt is\nmoeilijk te bevatten en dit is nog maar\nhet begin van je reis. Doe je best om de\nlegendes waar te maken.\n[1-]Oké![2-]Nee![3-]Ik ben bang...")
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
/*< 10>*/ 	printf(/* textboxtype: 1, unk: 11, line: 116 */ "<0x10006:0xfecd>Je...<pause 15> weet toch wel waar het ritueel mee\neindigt?<pause 30>\n\n\n[1-]Geen idee.[2-]O-Oooo...[3-]Min of meer...")
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

