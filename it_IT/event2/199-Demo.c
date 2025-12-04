          void entrypoint_199_00() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 1, line: 27 */ "Allora, che ne pensi?<pause 30>\n[1-]Ti dona![2-]Mah...[3-]È Carnevale?")
/*<  2>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 37}
          }

          void entrypoint_199_01() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 1, unk: 1, line: 73 */ "Ooh... e com'è possibile?!\nNon è che si è perso???\nDove sarà mai finito?<pause 30> \n[1-]Vinco io![2-]Riportamelo![3-]Bel taglio!")
/*<  8>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 37}
          }

          void entrypoint_199_02() {
/*<  3>*/ 	start()
/*<  4>*/ 	printf(/* textboxtype: 1, unk: 1, line: 174 */ "<heroname>, lascia che io creda\nfino in fondo a questo miracolo,\naffronta il tuo destino,\nti prego. <pause 30>\n[1-]Lo farò[2-]Non voglio[3-]È troppo")
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
/*< 10>*/ 	printf(/* textboxtype: 1, unk: 1, line: 116 */ "<0x10006:0xfecd>Di che si tratterà mai? <pause 15>\nForse l'hai già capito...<pause 30> \n\n\n[1-]Non saprei[2-]Non mi piace[3-]Forse sì")
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

