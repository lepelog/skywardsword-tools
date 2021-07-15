          void entrypoint_451_01() {
          	start()
/*<  1>*/ 	printf("Ritrovamento di oggetto che si suppone\nessere quello smarrito dall'essere umano\ndell'Isola della roulette.\n\nÈ possibile chiamare il robot di Kondoroy\ne incaricarlo del recupero.\nVolete chiamare il robot?\n[1]Sì[2-]No")
/*<  2>*/ 	switch (choice(2)) {
          	  case 0:
/*<  3>*/ 		printf("\x0E\x01\x12\x04\x00\x05Certamente, signore. Emetto subito\nle onde di richiamo per il robot.")
          	  case 1:
/*<  4>*/ 		printf("\x0E\x01\x12\x04\x00\x05Certamente, signore. Vogliate esaminare\nnuovamente l'oggetto per recuperarlo.")
          	}
          }

          void entrypoint_451_02() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf("\x0E\x01\x12\x04\x00dFaih, mia adorata! Mi hai chiamato...?!\nBzzz...\n\n\nEh? Questo luogo emana una nostalgica\nfamiliarità...\n\n\nMa bando alle ciance.\nÈ questo ciò che devo trasportare?")
          }

          void entrypoint_451_03() {
/*<  7>*/ 	start()
/*<  8>*/ 	printf("\x0E\x01\x12\x04\x00dIo vado su in Cielo, raggiungimi là.\nNon farmi aspettare troppo!")
          }

          void entrypoint_451_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf("\x0E\x01\x12\x04\x00\x01Mio signore, suggerisco di metterci\nanche noi in volo e far rotta verso\nl'Isola della roulette.")
/*< 14>*/ 	story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*< 13>*/ 	story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */] = true;
/*< 19>*/ 	story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */] = false;
/*< 18>*/ 	story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */] = false;
/*< 17>*/ 	story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = false;
/*< 16>*/ 	story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */] = false;
/*< 20>*/ 	story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */] = false;
/*< 15>*/ 	story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */] = false;
/*< 21>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 721, 'next': 22, 'param3': 52}
/*< 22>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 722, 'next': 24, 'param3': 52}
/*< 24>*/ 	story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = false;
/*< 23>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
          }

          void entrypoint_451_05() {
/*< 11>*/ 	start()
/*< 12>*/ 	printf("\x0E\x01\x12\x04\x00dSì, sì... Signor Verdino, tranquillizzati\ne lascia fare a un professionista!\nBzzz!")
          }

          void entrypoint_451_06() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf("Ritrovamento di oggetto che si suppone\nessere quello smarrito dall'essere umano\ndell'Isola della roulette.\n\nÈ possibile chiamare il robot di Kondoroy\ne incaricarlo del recupero.\n\n\nTuttavia, trovandosi il robot al Vulcano\ndi Oldin, occupato nell'esecuzione di un\nincarico, risulta impossibile richiamarlo.\n")
          }

