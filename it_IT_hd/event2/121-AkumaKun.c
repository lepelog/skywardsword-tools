          void entrypoint_121_02() {
/*<102>*/ 	start()
/*<103>*/ 	printf("\x0E\x01\x09\x04\x15\xC09Fermo! No, non aprire lo scrigno!\nDentro c'è qualcosa di terribile!\n[1]Cosa?[2]Lo apro")
/*<104>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_106:
/*<106>*/ 		printf("\x0E\x01\x09\x04\x13\x800Dentro lo scrigno c'è un oggetto terribile,\nchiamato <y<amuleto demoniaco>>.\n\n\nSe porti quell'amuleto con te puoi ottenere\npiù rupie e \x0E\x01\x09\x04\x15\xC00anche più tesori!\n\n\n\x0E\x01\x09\x04\x14\xA00È solo...\nÈ solo che... Aaah...\n[1]Va bene[2]Cosa?")
/*<108>*/ 		switch (choice(2)) {
          		  case 0:
/*<109>*/ 			printf("\x0E\x01\x09\x04\x13\x800Certamente, detto così suona bene...")
          			flw_107:
/*<107>*/ 			printf("\x0E\x01\x09\x04\x15\xC00È terribile, credimi!\n\n\n\n\x0E\x01\x09\x04\x14\xA00Chiunque porti l'amuleto\n<r<non può aprire la borsa>>!\n\n\nNon potrai bere pozioni o usare\nlo scudo se ne hai bisogno!\nTe l'ho detto che è terribile!\n\n\x0E\x01\x09\x04\x15\xC00Questo è il motivo per cui\nnon dovresti aprire lo scrigno!")
/*<110>*/ 			scene_flags[0 'Skyloft'][84 /* 0xB 10 */] = true;
          		  case 1:
          			goto flw_107
          		}
          	  case 1:
/*<105>*/ 		printf("\x0E\x01\x09\x04\x13\x800Ti ho detto di non aprirlo!")
          		goto flw_106
          	}
          }

          void entrypoint_121_20() {
/*<  1>*/ 	start()
/*<  3>*/ 	printf("\x0E\x01\x09\x04\x00\x03F\x2010fermo!\nNon farmi del male!\n\n\nPosso sembrare un demone,\nma non lo sono. Dico davvero!")
/*< 66>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2560, 'next': 114, 'param3': 13}
/*<114>*/ 	make_actor_do_something(2, 0)
/*<  4>*/ 	printf("\x0E\x01\x09\x04\x00\x05Lascia che ti spieghi...\n\n\n\nMi chiamo <b<Morsego>> e sono una\ncreatura che vive qui a Oltrenuvola.\n\n\nÈ vero, ho l'aspetto di un mostro, ma\nnon per questo vado in giro ad\nattaccare la gente!\n\nLa bambina è l'unica che non ha paura\ndi me quando mi vede, così viene a\ntrovarmi.\n\nIo, però, vorrei essere amico\ndi tutti qui a Oltrenuvola...\n\n\nPurtroppo, come puoi vedere,\nil mio aspetto incute paura\ne la gente preferisce evitarmi.")
/*< 75>*/ 	{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': 2048, 'next': 72, 'param3': 13}
/*< 72>*/ 	printf("Vorrei solo avere degli amici.\nPerò ogni volta che qualcuno\nmi vede scappa via spaventato...\n\nOra che mi ricordo... c'è una favola\nche tutti i mostri conoscono...")
/*< 76>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3077, 'next': 73, 'param3': 13}
/*< 73>*/ 	printf("Rendendo felice un umano\nè possibile ottenere una cosa\nchiamata <y<gemma di gratitudine>>.")
/*< 77>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2572, 'next': 74, 'param3': 13}
/*< 74>*/ 	printf("Vedendo molte <y<gemme di gratitudine\n>>concentrate in un posto solo, persino\ni mostri si trasformano in umani!")
/*< 78>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3072, 'next': 115, 'param3': 13}
/*<115>*/ 	make_actor_do_something(3, 0)
/*< 10>*/ 	printf("\x0E\x01\x09\x04\x00\x07Quanto mi piacerebbe diventare\nun umano!\n\n\nDa quello che vedo, sembri\nuna persona altruista!")
/*< 79>*/ 	{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': 2048, 'next': 116, 'param3': 13}
/*<116>*/ 	make_actor_do_something(4, 0)
/*< 80>*/ 	printf("Che ne dici? Credi di riuscire\na ottenere delle <y<gemme di gratitudine>>\nper farmele vedere?\n[1]Certo[2-]Non ora")
/*<  5>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_82:
/*< 82>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3086, 'next': 117, 'param3': 13}
/*<117>*/ 		make_actor_do_something(5, 0)
/*<  8>*/ 		printf("Lo farai davvero?!")
/*<118>*/ 		make_actor_do_something(6, 0)
/*<113>*/ 		printf("Dicono che il modo migliore per\nottenere delle <y<gemme di gratitudine >>sia\nrisolvere i problemi altrui!")
/*< 84>*/ 		{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2572, 'next': 83, 'param3': 13}
/*< 83>*/ 		printf("Capita che si trovi della gratitudine\ndove vive la gente, come qui su\nOltrenuvola o da qualche parte nel\ncielo!\nHo fatto in modo che le <y<gemme di\ngratitudine>> <g<siano visibili>> anche agli\nocchi di un puro di cuore quale sei!\n\nPerò sappi che le gemme cadute sono\nvisibili solo durante la <r<notte>>, quindi\ncercale di <r<notte>>!")
/*< 86>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3079, 'next': 85, 'param3': 13}
/*< 85>*/ 		printf("Ti ripagherò per tutte quelle che troverai\nper me. Grazie mille!")
/*<  2>*/ 		story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */] = true;
/*< 65>*/ 		scene_flags[0 'Skyloft'][78 /* 0x8 40 */] = true;
/*< 11>*/ 		switch (story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */]) {
          		  case 0:
/*< 12>*/ 			story_flags[370 /* us: 805A9B02 0x01, jp: 805ACD82 0x01 */] = true;
          			flw_167:
/*<167>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
          			goto flw_167
          		}
          	  case 1:
          		flw_81:
/*< 81>*/ 		{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2572, 'next': 6, 'param3': 13}
/*<  6>*/ 		printf("Ti prego... in fondo non chiedo molto.\n[1]Va bene[2-]Nooo!")
/*<  7>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_82
          		  case 1:
          			goto flw_81
          		}
          	}
          }

          void entrypoint_121_03() {
/*<152>*/ 	start()
/*<158>*/ 	switch (story_flags[1091 /* us: 805A9B52 0x02, jp: 805ACDD2 0x02 */]) {
          	  case 0:
/*<159>*/ 		printf("\x0E\x01\x09\x04\x00\xA07Sono rimasto un po' male quando ho\ncapito che il mio aspetto fisico\nspaventava così tanto tutti...\n\nMa ora si direbbe che sono anch'io\nun cittadino di Oltrenuvola a\ntutti gli effetti! Grazie di cuore!")
          	  case 1:
/*<153>*/ 		printf("\x0E\x01\x09\x04\x00\x05Link!\nHo fatto un giro fuori, dopo tanto\ntempo, e non c'è traccia di mostri...\n\nPensi che ci sia qualche relazione con\nil fatto che io sono diventato umano?\n[1]Forse[2]No")
/*<154>*/ 		switch (choice(2)) {
          		  case 0:
/*<155>*/ 			printf("\x0E\x01\x09\x04\x00\x856Già, proprio come pensavo...")
          			flw_157:
/*<157>*/ 			printf("\x0E\x01\x09\x04\x08\x800Quella grande forza demoniaca che\navevo prima...\nÈ totalmente sparita, da quando sono\ndiventato umano!\n\x0E\x01\x09\x04\x15\xA07Però, in questo modo gli abitanti di\nOltrenuvola possono vivere in pace.\nE tutto per merito tuo!")
/*<160>*/ 			story_flags[1091 /* us: 805A9B52 0x02, jp: 805ACDD2 0x02 */] = true;
          		  case 1:
/*<156>*/ 			printf("\x0E\x01\x09\x04\x00\x814Ah...\nMi piacciono quelli che non hanno\npeli sulla lingua!")
          			goto flw_157
          		}
          	}
          }

          void entrypoint_121_30() {
/*<  9>*/ 	start()
/*<111>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*<112>*/ 		printf("\x0E\x01\x09\x04\x13\x808Ah! L'hai aperto!\n\n\n\nLa curiosità degli umani è\ndavvero incredibile!\nMa suppongo che sia anche\nquesto a rendervi interessanti.\nQuando hai quell'amuleto non\npuoi aprire la borsa. Se lo lasci\nal <b<deposito>> potrai aprirla di nuovo.")
          	  case 1:
/*<120>*/ 		switch (story_flags[583 /* us: 805A9B1B 0x40, jp: 805ACD9B 0x40 */]) {
          		  case 0:
/*<121>*/ 			story_flags[734 /* us: 805A9B27 0x40, jp: 805ACDA7 0x40 */] = true;
          			flw_13:
/*< 13>*/ 			switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          			  case 0:
/*<125>*/ 				switch (scene_flags[79 /* 0x8 80 */]) {
          				  case 0:
/*<126>*/ 					printf("\x0E\x01\x09\x04\n\xC05Non ti ringrazierò mai abbastanza!\nAdesso mi farò un bel\ngiro di Oltrenuvola!")
          				  case 1:
/*< 95>*/ 					{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 3072, 'next': 17, 'param3': 13}
/*< 17>*/ 					printf("\x0E\x01\x09\x04\x00\x05Che ne dici? Scommetto che non mi hai\nriconosciuto subito.")
/*< 96>*/ 					{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3072, 'next': 97, 'param3': 13}
/*< 97>*/ 					printf("Io... mi sento come se fossi nel corpo\ndi qualcun altro!")
/*<124>*/ 					scene_flags[0 'Skyloft'][79 /* 0x8 80 */] = true;
          				}
          			  case 1:
/*< 39>*/ 				switch (scene_flags[70 /* 0x9 40 */]) {
          				  case 0:
/*< 41>*/ 					switch (scene_flags[71 /* 0x9 80 */]) {
          					  case 0:
/*< 46>*/ 						switch (scene_flags[72 /* 0x8 01 */]) {
          						  case 0:
/*< 52>*/ 							switch (scene_flags[73 /* 0x8 02 */]) {
          							  case 0:
/*< 55>*/ 								switch (scene_flags[74 /* 0x8 04 */]) {
          								  case 0:
/*< 58>*/ 									switch (scene_flags[75 /* 0x8 08 */]) {
          									  case 0:
/*< 35>*/ 										switch (context_related2(6)) {
          										  case 0:
/*< 98>*/ 											{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3083, 'next': 36, 'param3': 13}
/*< 36>*/ 											printf("Oooh! Ne hai collezionate ben <r<80>>!?\nCredo proprio che questo significhi\nche hai raccolto tutte le <y<gemme di\ngratitudine>>!\n\x0E\x01\x09\x04\x07\x807Grazie! Grazie davvero!\nTi prego, accetta un ultimo dono.")
          											flw_166:
/*<166>*/ 											{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 37, 'param3': 12}
/*< 37>*/ 											give_item(111 0x6F);
/*< 20>*/ 											printf("Non sarà proprio un oggetto\nutilissimo, ma spero che ti aiuti.")
/*< 87>*/ 											{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3072, 'next': 15, 'param3': 13}
/*< 15>*/ 											printf("Queste sono tutte le <y<<y<gemme di\ngratitudine<y< >>che mi trasformeranno\nin un umano!\n\n\x0E\x01\x09\x04\x07\x809Speriamo che funzionino...\nDiventerò davvero un essere\numano? Il cuore mi batte\na mille...")
/*<148>*/ 											scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          										  case 1:
/*< 62>*/ 											printf("\x0E\x01\x09\x04\x00\x05Mi piacerebbe essere un umano...\nTi prego, colleziona altre\n<y<gemme di gratitudine>>!\n\nProviamo con <r<8>><r<0 >>questa volta.\nIl tuo aiuto è inestimabile!")
          										}
          									  case 1:
/*< 34>*/ 										switch (context_related2(5)) {
          										  case 0:
/*< 59>*/ 											printf("\x0E\x01\x09\x04\x09\xD0BIncredibile!\nSei riuscito a raccogliere tantissime\n<y<gemme di gratitudine>>!\n\n\x0E\x01\x09\x04\x07\x807Questo è tutto ciò che ho.\nTi prego, prendilo!")
          											flw_127:
/*<127>*/ 											{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 161, 'param3': 12}
/*<161>*/ 											give_item(33 0x21);
/*<162>*/ 											printf("\x0E\x01\x09\x04\x09\xD0BVorrei poterti dimostrare la mia\ngratitudine, ma le gemme sono ancora\ntroppo poche...\n\n\x0E\x01\x09\x04\x07\x807Ma sì, prendi lo stesso questo!")
/*<163>*/ 											give_item(33 0x21);
/*< 60>*/ 											printf("Ancora poche <y<gemme di gratitudine\n>>e diventerò un umano... aiutami...")
/*< 61>*/ 											scene_flags[0 'Skyloft'][75 /* 0x8 08 */] = true;
/*<143>*/ 											switch (context_related2(6)) {
          											  case 0:
/*<144>*/ 												printf("\x0E\x01\x09\x04\x09\xD0BOoh! Le <y<gemme di gratitudine >>non fanno\nche aumentare, meraviglioso!\n\n\nOra sono in tutto <r<80>>! Forse con queste sei\nriuscito a recuperare tutte le gemme di\ngratitudine che mi servono.\n\n\x0E\x01\x09\x04\x07\x807Grazie! Grazie davvero!\n\n\n\nAccetta questo come ultimo\nringraziamento da parte mia.")
          												goto flw_166
          											  case 1:
/*<147>*/ 												scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          											}
          										  case 1:
/*< 57>*/ 											printf("\x0E\x01\x09\x04\x00\x05Mi piacerebbe essere un umano...\nTi prego, colleziona altre\n<y<gemme di gratitudine>>!\n\nCredi di poterne trovare <r<70>>?\nSarebbe magnifico.")
          										}
          									}
          								  case 1:
/*< 33>*/ 									switch (context_related2(4)) {
          									  case 0:
/*< 28>*/ 										printf("\x0E\x01\x09\x04\x09\xD0BIncredibile!\nSei riuscito a raccogliere tantissime\n<y<gemme di gratitudine>>!\n\n\x0E\x01\x09\x04\x07\x807Questo è tutto ciò che ho.\nTi prego, prendilo!")
          										flw_165:
/*<165>*/ 										{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 12}
/*< 27>*/ 										give_item(110 0x6E);
/*< 29>*/ 										printf("Ancora poche <y<gemme di gratitudine\n>>e diventerò un umano... aiutami...")
/*< 56>*/ 										scene_flags[0 'Skyloft'][74 /* 0x8 04 */] = true;
/*<141>*/ 										switch (context_related2(5)) {
          										  case 0:
/*<142>*/ 											printf("\x0E\x01\x09\x04\x09\xD0BOoh! Le <y<gemme di gratitudine>>\nnon fanno che aumentare,\nmeraviglioso!\n\n\x0E\x01\x09\x04\x07\x807Ti prego di accettare questo come\npiccolo ringraziamento!")
          											goto flw_127
          										  case 1:
/*<146>*/ 											scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          										}
          									  case 1:
/*< 54>*/ 										printf("\x0E\x01\x09\x04\x00\x05Mi piacerebbe essere un umano...\nTi prego, colleziona altre\n<y<gemme di gratitudine>>!\n\nPurtroppo credo che tu ne debba\ntrovare almeno <r<50>>. Ti ringrazio\ndavvero!")
          									}
          								}
          							  case 1:
/*< 32>*/ 								switch (context_related2(3)) {
          								  case 0:
/*< 50>*/ 									printf("\x0E\x01\x09\x04\x09\xD0BIncredibile!\nSei riuscito a raccogliere tantissime\n<y<gemme di gratitudine>>!\n\n\x0E\x01\x09\x04\x07\x807Questo è tutto ciò che ho.\nTi prego, prendilo!")
          									flw_164:
/*<164>*/ 									{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 49, 'param3': 12}
/*< 49>*/ 									give_item(33 0x21);
/*< 51>*/ 									printf("Hai raccolto un bel po'\ndi <y<gemme di gratitudine>>.\n\n\nTi prego, collezionane ancora.")
/*< 53>*/ 									scene_flags[0 'Skyloft'][73 /* 0x8 02 */] = true;
/*<139>*/ 									switch (context_related2(4)) {
          									  case 0:
/*<140>*/ 										printf("\x0E\x01\x09\x04\x09\xD0BOoh! Le <y<gemme di gratitudine>>\nnon fanno che aumentare,\nmeraviglioso!\n\n\x0E\x01\x09\x04\x07\x807Ti prego di accettare questo come\npiccolo ringraziamento!")
          										goto flw_165
          									  case 1:
/*<145>*/ 										scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          									}
          								  case 1:
/*< 48>*/ 									printf("\x0E\x01\x09\x04\x00\x05Mi piacerebbe essere un umano...\nTi prego, colleziona altre\n<y<gemme di gratitudine>>!\n\nSe tu riuscissi a trovarne un totale\ndi <r<40>> sarebbe grandioso.")
          								}
          							}
          						  case 1:
/*< 31>*/ 							switch (context_related2(2)) {
          							  case 0:
/*< 25>*/ 								printf("\x0E\x01\x09\x04\x09\xD0BIncredibile!\nSei riuscito a raccogliere tantissime\n<y<gemme di gratitudine>>!\n\n\x0E\x01\x09\x04\x07\x807Questo è tutto ciò che ho.\nTi prego, prendilo!")
          								flw_24:
/*< 24>*/ 								give_item(109 0x6D);
/*< 26>*/ 								printf("Hai raccolto un bel po'\ndi <y<gemme di gratitudine>>.\n\n\nTi prego, collezionane ancora.")
/*< 47>*/ 								scene_flags[0 'Skyloft'][72 /* 0x8 01 */] = true;
/*<137>*/ 								switch (context_related2(3)) {
          								  case 0:
/*<138>*/ 									printf("\x0E\x01\x09\x04\x09\xD0BOoh! Le <y<gemme di gratitudine>>\nnon fanno che aumentare,\nmeraviglioso!\n\n\x0E\x01\x09\x04\x07\x807Ti prego di accettare questo come\npiccolo ringraziamento!")
          									goto flw_164
          								  case 1:
/*< 99>*/ 									scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          								}
          							  case 1:
/*< 64>*/ 								printf("\x0E\x01\x09\x04\x00\x05Mi piacerebbe essere un umano...\nTi prego, colleziona altre\n<y<gemme di gratitudine>>!\n\nNe vorrei vedere <r<30>> in totale.\nDovrebbero bastare.")
          							}
          						}
          					  case 1:
/*< 30>*/ 						switch (context_related2(1)) {
          						  case 0:
/*< 43>*/ 							printf("\x0E\x01\x09\x04\x09\xD0BIncredibile!\nSei riuscito a raccogliere tantissime\n<y<gemme di gratitudine>>!\n\n\x0E\x01\x09\x04\x07\x807Questo è tutto ciò che ho.\nTi prego, prendilo!")
          							flw_42:
/*< 42>*/ 							give_item(94 0x5E);
/*< 44>*/ 							printf("Sembra che io abbia bisogno\ndi altre <y<<y<gemme di gratitudine<y<>> per\ndiventare un umano.\n\nTi prego, tu sei l'unico che\npuò aiutarmi...")
/*< 45>*/ 							scene_flags[0 'Skyloft'][71 /* 0x9 80 */] = true;
/*<135>*/ 							switch (context_related2(2)) {
          							  case 0:
/*<136>*/ 								printf("\x0E\x01\x09\x04\x09\xD0BOoh! Le <y<gemme di gratitudine>>\nnon fanno che aumentare,\nmeraviglioso!\n\n\x0E\x01\x09\x04\x07\x807Ti prego di accettare questo come\npiccolo ringraziamento!")
          								goto flw_24
          							  case 1:
          							}
          						  case 1:
/*< 40>*/ 							printf("\x0E\x01\x09\x04\x00\x05Mi piacerebbe essere un umano...\nTi prego, colleziona delle altre\n<y<gemme di gratitudine>>!\n\nCredi di poterne trovare <r<10\n>>questa volta?")
          						}
          					}
          				  case 1:
/*< 63>*/ 					switch (context_related2(0)) {
          					  case 0:
/*< 22>*/ 						printf("\x0E\x01\x09\x04\x09\xD0BIncredibile!\nSei riuscito a raccogliere tantissime\n<y<gemme di gratitudine>>!\n\n\x0E\x01\x09\x04\x07\x807Questo è tutto ciò che ho.\nTi prego, prendilo!")
/*< 21>*/ 						give_item(108 0x6C);
/*< 23>*/ 						printf("Sembra che io abbia bisogno\ndi altre <y<<y<gemme di gratitudine<y<>> per\ndiventare un umano.\n\nTi prego, tu sei l'unico che\npuò aiutarmi...")
/*< 38>*/ 						scene_flags[0 'Skyloft'][70 /* 0x9 40 */] = true;
/*<133>*/ 						switch (context_related2(1)) {
          						  case 0:
/*<134>*/ 							printf("\x0E\x01\x09\x04\x09\xD0BOoh! Le <y<gemme di gratitudine>>\nnon fanno che aumentare,\nmeraviglioso!\n\n\x0E\x01\x09\x04\x07\x807Ti prego di accettare questo come\npiccolo ringraziamento!")
          							goto flw_42
          						  case 1:
          						}
          					  case 1:
/*<132>*/ 						switch (zone_temp_flags[1 /* 0x1 02 */]) {
          						  case 0:
          							flw_122:
/*<122>*/ 							switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          							  case 0:
/*< 14>*/ 								printf("\x0E\x01\x09\x04\x00\x05Aaah... Per quanto resterò\nun mostro? Ti prego, sbrigati\na trovare delle <y<<y<gemme di gratitudine<y<\n>>per me.\n<r<5 gemme>> sono un buon inizio,\nma potresti ottenerne altre aiutando\npiù persone.")
          							  case 1:
/*<123>*/ 								printf("\x0E\x01\x09\x04\x00\x05Farò in modo che la bambina torni\na casa sana e salva domattina, puoi\ndire ai suoi genitori di stare\ntranquilli.\nOra veniamo al dunque, hai trovato\ndelle <y<gemme di gratitudine>>?\n\n\n<r<5 gemme >>sarebbero già un buon\nrisultato, ma puoi ottenerne di più\naiutando ancora più persone.")
          							}
          						  case 1:
/*<129>*/ 							check_item_flag(48, 1)
/*<128>*/ 							switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 46}) {
          							  case 0:
/*<130>*/ 								printf("\x0E\x01\x09\x04\x00\x05Sì, bravo! Vedo che hai capito cosa\nsono le <y<gemme di gratitudine>>!<pause14>\n\n\nPer iniziare me ne servono <r<5>>.\n\n\n\nRicorda che ne puoi ottenere tante\nse ti dai da fare ad aiutare la gente!")
/*<131>*/ 								zone_temp_flags[1 /* 0x1 02 */] = true;
          							  case 1:
          								goto flw_122
          							}
          						}
          					}
          				}
          			}
          		  case 1:
          			goto flw_13
          		}
          	}
          }

          void entrypoint_121_00() {
          	start()
/*< 70>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 35, 'next': 18, 'param3': 32}
/*< 18>*/ 	printf("\x0E\x01\x09\x04\x00\x0BMa è... ah!\x0E\x01\x05\x04<\x00")
/*< 67>*/ 	make_actor_do_something(0, 0)
/*<119>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 68, 'param3': 6}
/*< 68>*/ 	printf("\x0E\x01\x09\x04\x00\x04\x0E\x01\x08\x02\x2CDAaah!\x0E\x01\x05\x04\x1E\x00")
/*< 69>*/ 	make_actor_do_something(1, 0)
/*< 71>*/ 	{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': -1, 'next': 88, 'param3': 16}
/*< 88>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8969, 'param2': 3072, 'next': 89, 'param3': 13}
/*< 89>*/ 	printf("\x0E\x01\x06\x02\xFCCD... ...\x0E\x01\x06\x02Í\n\x0E\x01\x09\x04\x00\x07Che aspetto ho, Link?")
/*< 90>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8968, 'param2': 2560, 'next': 91, 'param3': 13}
/*< 91>*/ 	printf("... Va bene. Non c'è bisogno di dire nulla,\nlo vedo dalla tua faccia.")
/*< 92>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8970, 'param2': 3072, 'next': 93, 'param3': 13}
/*< 93>*/ 	printf("Il mio aspetto è così diverso da prima\nche sei rimasto senza parole!")
/*< 94>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8969, 'param2': 3072, 'next': 19, 'param3': 13}
/*< 19>*/ 	printf("Non posso credere che tu abbia fatto\nquesto per me. Ti ringrazio tantissimo.\n\n\nOra potrò finalmente vivere in armonia\ncon gli altri.")
/*< 16>*/ 	story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */] = true;
          }

          void entrypoint_121_01() {
/*<100>*/ 	start()
/*<149>*/ 	switch (temp_flags[12 /* 0x0 10 */]) {
          	  case 0:
/*<151>*/ 		printf("\x0E\x01\x09\x04\x08\xA0COhhh! Quanta luce qui!\nE quante cose che si muovono!\nChe meraviglia. Stare qui è una gioia!")
          	  case 1:
/*<101>*/ 		printf("\x0E\x01\x09\x04\x00\x05Ah... Link!\nTante grazie per l'altro giorno!\nEra da tanto che desideravo visitare\nil bazar!\n\x0E\x01\x09\x04\x15\xC00Guarda! Nessuno ha più paura di me!\nMi sembra un sogno!")
/*<150>*/ 		temp_flags[12 /* 0x0 10 */] = true;
          	}
          }

