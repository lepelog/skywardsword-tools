          void entrypoint_202_04() {
/*< 44>*/ 	start()
/*< 45>*/ 	printf(/* textboxtype: 7, unk: 0, line: 5 */ "Se colpirai la pietra brillante\ncelata in fondo all'occhio, la\nbocca si chiuderà e ciò che\nscorre si fermerà.")
          }

          void entrypoint_202_05() {
/*< 46>*/ 	start()
/*< 47>*/ 	printf(/* textboxtype: 7, unk: 0, line: 2 */ "Il simbolo della gratitudine\ninciso sulla <color red<grande statua>coloroff> indica\nlo <color red<stile di vita>coloroff> di questa terra.\n\nPrima la <color red<schiena>coloroff>, quindi il\n<color red<posteriore>coloroff>, poi il <color red<dorso della\nmano destra>coloroff> e infine il <color red<dorso\ndella mano sinistra>coloroff>.")
/*< 48>*/ 	story_flags[1195 /* us: 805A9B61 0x02, jp: 805ACDE1 0x02 */] = true;
          }

          void entrypoint_202_11() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 2, unk: 0, line: 9 */ "Da quanto ho visto finora, ritengo che\nla <color yellow<chiave >coloroff>menzionata sia quella che\napre ciò che abbiamo davanti a noi.")
          }

          void entrypoint_202_12() {
/*<  8>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 2, unk: 0, line: 10 */ "")
          }

          void entrypoint_202_13() {
/*<  9>*/ 	start()
/*< 12>*/ 	printf(/* textboxtype: 2, unk: 0, line: 11 */ "<0x10012:0x0000000b>Signore, Faih a rapporto.\nRilevo un grande scrigno.\n\n\nProbabilità che dentro si trovi la\n<color yellow<chiave >coloroff>per aprire la porta situata nella\nparte alta della statua: 85%.")
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
/*< 15>*/ 	printf(/* textboxtype: 1, unk: 0, line: 17 */ "Che insistenza.<pause 5>.<pause 5>.")
/*< 19>*/ 	set_camera(3, 0)
/*< 16>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "Mi occorre del tempo per\ntrovare il modo di aiutare\nil mio oscuro signore.<pause 5>.<pause 5>.")
/*< 20>*/ 	set_camera(4, 0)
/*< 30>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3334, 'param2': 512, 'next': 23, 'param3': 13}
/*< 23>*/ 	wait_frames(30)
/*< 22>*/ 	printf(/* textboxtype: 1, unk: 0, line: 19 */ "Inoltre... il tuo continuo scorrazzare\nmi urta oltremodo i nervi.")
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
/*< 13>*/ 	printf(/* textboxtype: 2, unk: 0, line: 12 */ "<0x10012:0x00000001>Mio signore,\nrilevo nella parte superiore un\nmeccanismo che ricorda quello\ndi una porta con serratura.")
/*< 43>*/ 	scene_flags[12 'Faron: Ancient Cistern'][107 /* 0xC 08 */] = true;
          }

          void entrypoint_202_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 7, unk: 0, line: 1 */ "Se toccherai le <color red<quattro pietre\ndirezionali>coloroff> secondo lo <color red<stile di\nvita>coloroff> di questa terra, la strada\nsi aprirà.")
          }

          void entrypoint_202_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 7, unk: 0, line: 3 */ "Riporta la statua alla sua forma\noriginaria, scendi verso la terra\nseguendo il filo e otterrai la\n<color yellow<chiave >coloroff>che apre la via.")
          }

          void entrypoint_202_03() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 7, unk: 0, line: 4 */ "Cerca la <color yellow<chiave >coloroff>che giace\nnelle profondità della terra.")
          }

