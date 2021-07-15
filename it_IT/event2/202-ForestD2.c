          void entrypoint_202_04() {
/*< 44>*/ 	start()
/*< 45>*/ 	printf("Se colpirai la pietra brillante\ncelata in fondo all'occhio, la\nbocca si chiuderà e ciò che\nscorre si fermerà.")
          }

          void entrypoint_202_05() {
/*< 46>*/ 	start()
/*< 47>*/ 	printf("Il simbolo della gratitudine\ninciso sulla <r<grande statua>> indica\nlo <r<stile di vita>> di questa terra.\n\nPrima la <r<schiena>>, quindi il\n<r<posteriore>>, poi il <r<dorso della\nmano destra>> e infine il <r<dorso\ndella mano sinistra>>.")
/*< 48>*/ 	story_flags[1195 /* us: 805A9B61 0x02, jp: 805ACDE1 0x02 */] = true;
          }

          void entrypoint_202_11() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf("Da quanto ho visto finora, ritengo che\nla <y<chiave >>menzionata sia quella che\napre ciò che abbiamo davanti a noi.")
          }

          void entrypoint_202_12() {
/*<  8>*/ 	start()
/*< 11>*/ 	printf("")
          }

          void entrypoint_202_13() {
/*<  9>*/ 	start()
/*< 12>*/ 	printf("\x0E\x01\x12\x04\x00\x0BSignore, Faih a rapporto.\nRilevo un grande scrigno.\n\n\nProbabilità che dentro si trovi la\n<y<chiave >>per aprire la porta situata nella\nparte alta della statua: 85%.")
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
/*< 36>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 33, 'param3': 6}
/*< 33>*/ 	make_actor_do_something(0, 13)
/*< 35>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 26, 'param3': 6}
/*< 26>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3331, 'param2': 512, 'next': 15, 'param3': 13}
/*< 15>*/ 	printf("Che insistenza.<pause05>.<pause05>.")
/*< 19>*/ 	set_camera(3, 0)
/*< 16>*/ 	printf("Mi occorre del tempo per\ntrovare il modo di aiutare\nil mio oscuro signore.<pause05>.<pause05>.")
/*< 20>*/ 	set_camera(4, 0)
/*< 30>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3334, 'param2': 512, 'next': 23, 'param3': 13}
/*< 23>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 22, 'param3': 6}
/*< 22>*/ 	printf("Inoltre... il tuo continuo scorrazzare\nmi urta oltremodo i nervi.")
/*< 34>*/ 	make_actor_do_something(1, 13)
/*< 37>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 27, 'param3': 6}
/*< 27>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3332, 'param2': 768, 'next': 39, 'param3': 13}
/*< 39>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 21, 'param3': 6}
/*< 21>*/ 	set_camera(5, 0)
/*< 29>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 63, 'next': 31, 'param3': 6}
/*< 31>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 41, 'param3': 6}
/*< 41>*/ 	zone_temp_flags[18 /* 0x3 04 */] = true;
/*< 24>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': -1, 'param3': 42}
          }

          void entrypoint_202_14() {
/*< 10>*/ 	start()
/*< 42>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 13, 'param3': 46}
/*< 13>*/ 	printf("\x0E\x01\x12\x04\x00\x01Mio signore,\nrilevo nella parte superiore un\nmeccanismo che ricorda quello\ndi una porta con serratura.")
/*< 43>*/ 	scene_flags[12 'Faron: Ancient Cistern'][107 /* 0xC 08 */] = true;
          }

          void entrypoint_202_01() {
          	start()
/*<  1>*/ 	printf("Se toccherai le <r<quattro pietre\ndirezionali>> secondo lo <r<stile di\nvita>> di questa terra, la strada\nsi aprirà.")
          }

          void entrypoint_202_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf("Riporta la statua alla sua forma\noriginaria, scendi verso la terra\nseguendo il filo e otterrai la\n<y<chiave >>che apre la via.")
          }

          void entrypoint_202_03() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf("Cerca la <y<chiave >>che giace\nnelle profondità della terra.")
          }

