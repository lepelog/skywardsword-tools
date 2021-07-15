          void entrypoint_199_00() {
          	start()
/*<  1>*/ 	printf("Alors, comment tu me trouves?<pause1E>\n[1]Sublime![2]Euh...[3]C'est\ncarnaval?")
/*<  2>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 37}
          }

          void entrypoint_199_01() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf("Mais qu'est-ce qui a bien pu lui\narriver? Il s'est perdu dans les nuages?\nLe pauvre petit poulet...<pause1E>\n[1]Je vais\ngagner![2]Rends\x2010moi \nmon oiseau![3]Belle coupe!")
/*<  8>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 37}
          }

          void entrypoint_199_02() {
/*<  3>*/ 	start()
/*<  4>*/ 	printf("Nous avons été témoins de quelque\nchose d'extraordinaire aujourd'hui.\nMais, ce n'est que le début du périple.\nMes espoirs reposent sur toi.\nLink!<pause1E>\n[1]Comptez\nsur moi![2]Pas\nquestion![3]C'est un lourd\nfardeau...")
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
/*< 10>*/ 	printf("\x0E\x01\x06\x02\xFECDTu...<pause0F> sais ce qui va se passer\nmaintenant, n'est\x2010ce pas?<pause1E>\n[1]Non[2]J'ai peur...[3]Je crois")
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

