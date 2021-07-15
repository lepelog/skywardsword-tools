          void entrypoint_122_01() {
/*<  2>*/ 	start()
/*<133>*/ 	switch (story_flags[375 /* us: 805A9B02 0x20, jp: 805ACD82 0x20 */]) {
          	  case 0:
/*<134>*/ 		printf("Ora che l'indovino è tornato, sembra\ntornata l'allegria in questo posto!")
          	  case 1:
/*<125>*/ 		switch (story_flags[370 /* us: 805A9B02 0x01, jp: 805ACD82 0x01 */]) {
          		  case 0:
/*<126>*/ 			switch (story_flags[834 /* us: 805A9B32 0x04, jp: 805ACDB2 0x04 */]) {
          			  case 0:
/*<135>*/ 				switch (story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */]) {
          				  case 0:
/*<136>*/ 					printf("Ah, allora è vero che l'indovino\nse ne sta tutto triste a casa sua!\n\n\nForse se qualcuno gli trovasse una\nnuova sfera di cristallo, magari \ndeciderebbe di tornare tra noi...")
          				  case 1:
/*<128>*/ 					printf("Sì, forse mi ricordo dov'è la casa\ndell'indovino... bisogna andare\n<r<all'estremità orientale>> del\nvillaggio...\nMi manca la sua voce. Ti\ndispiacerebbe andare a\nvedere se sta bene?")
          				}
          			  case 1:
/*<130>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 127, 'param3': 31}
/*<127>*/ 				printf("Umm... Ultimamente non ho più\nvisto quell'<b<indovino>>...\n\n\nSecondo me, da quando la sua sfera\ndi cristallo si è rotta, lui se ne resta a\ncasa come un'anima in pena.")
/*<132>*/ 				switch (story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */]) {
          				  case 0:
/*<193>*/ 					printf("Bene...")
/*<194>*/ 					printf("Ah, allora è vero che l'indovino\nse ne sta tutto triste a casa sua!\n\n\nForse se qualcuno gli trovasse una\nnuova sfera di cristallo, magari \ndeciderebbe di tornare tra noi...")
          					flw_129:
/*<129>*/ 					story_flags[834 /* us: 805A9B32 0x04, jp: 805ACDB2 0x04 */] = true;
          				  case 1:
/*<131>*/ 					printf("Ti dispiace andare a vedere se\nl'indovino sta bene?\n\n\nSono abbastanza sicuro che abiti\n<r<nell'estremità orientale >>di Oltrenuvola.")
          					goto flw_129
          				}
          			}
          		  case 1:
/*<139>*/ 			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          			  case 0:
/*<140>*/ 				printf("Hai mai girato per Oltrenuvola\ndi notte?<pause19> Questo posto cambia\ntantissimo!\n\nHo sentito dire, per esempio, che dopo\nil tramonto il negoziante di arnesi\ncompra tesori.\n\nDevo ammettere che andare in giro\ndi notte è pericoloso, ma per un\ncavaliere in erba come te non\ndovrebbero esserci problemi.\nTutto quello che devi fare per\narrivare a sera è andare a\n<g<dormire in un letto>>!<pause19>\nEcco tutto!")
          			  case 1:
/*<  3>*/ 				printf("Dormire è la cura migliore\nper la stanchezza...<pause19>\n<g<Si può dormire ovunque,\npurché ci sia un letto.>>\nOltrenuvola cambia molto\ntra il giorno e la notte.\n\n\nSe <g<dormi in un letto >>potrai passare\nvelocemente tra notte e giorno!\nÈ divertente osservare la\nrealtà da più punti di vista!")
          			}
          		}
          	}
          }

          void entrypoint_122_19() {
/*< 56>*/ 	start()
/*<111>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 34, 'next': 112, 'param3': 32}
/*<112>*/ 	{'type': 'type3', 'subType': 1, 'param1': 34, 'param2': -1, 'next': 57, 'param3': 50}
/*< 57>*/ 	printf("Specchio, specchio delle mie brame,\nchi è la più bella del reame?")
/*<114>*/ 	set_camera(7, 0)
/*<113>*/ 	printf("\x0E\x01\x09\x04\x2200\x02Questo è quello che stavi pensando,\nvero, Link?")
          }

          void entrypoint_122_02() {
/*<  4>*/ 	start()
/*<161>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<162>*/ 		switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          		  case 0:
/*<168>*/ 			switch (story_flags[550 /* us: 805A9B17 0x80, jp: 805ACD97 0x80 */]) {
          			  case 0:
/*<169>*/ 				printf("Ho sentito dire che la <r<notte>>, al\n<r<dormitorio>>, si sente singhiozzare una\ndonna.\n\nCon il fisico che mi ritrovo non\nposso fare granché, ma non sopporto\nsentire qualcuno soffrire.")
/*<170>*/ 				printf("Cosa? Dal gabinetto...?\nE chiede carta...!?\n<pause14>Deve essere una persona\ndavvero timida...")
          			  case 1:
/*<165>*/ 				switch (story_flags[546 /* us: 805A9B17 0x08, jp: 805ACD97 0x08 */]) {
          				  case 0:
/*<166>*/ 					printf("Ho sentito dire che la <r<notte>>, al\n<r<dormitorio>>, si sente singhiozzare una\ndonna.\n\nCon il fisico che mi ritrovo non\nposso fare granché, ma non sopporto\nsentire qualcuno soffrire.")
/*<167>*/ 					printf("Cosa?<pause14> Dal gabinetto...?\nE chiede carta...!?\nVeramente, una volta l'ho fatto\nanch'io...")
          				  case 1:
/*<163>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 164, 'param3': 31}
/*<164>*/ 					printf("Ho sentito dire che la <r<notte>>, al\n<r<dormitorio>>, si sente singhiozzare una\ndonna.\n\nCon il fisico che mi ritrovo non\nposso fare granché, ma non sopporto\nsentire qualcuno soffrire.")
          				}
          			}
          		  case 1:
          			flw_137:
/*<137>*/ 			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          			  case 0:
/*<138>*/ 				printf("Spero che tu mi sia stato a sentire!\nPremi (2) per avere aiuto.\x0E\x01\x11\x02\x5CD")
          			  case 1:
/*<  5>*/ 				printf("Ah, così adesso stai facendo\nl'addestramento per diventare\ncavaliere, vero? Congratulazioni!\n\nMa non montarti la testa.\nSe non capisci qualcosa,\npremi (2) per chiedere aiuto. Va bene?\x0E\x01\x11\x02\x5CD\n\nÈ una dritta importantissima!")
          			}
          		}
          	  case 1:
          		goto flw_137
          	}
          }

          void entrypoint_122_03() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf("\x0E\x01\x09\x04\x00\x01Sei tu Link?\nOggi è il gran giorno, vero?\nIl battesimo del volo.\n\nE se sarai promosso, passerai\nfinalmente alla classe superiore!")
/*<  8>*/ 	printf("Qui a Oltrenuvola, saper volare è\nquello che distingue un bambino\nda un adulto!\n\n\x0E\x01\x09\x04\n\x404Se vuoi vincere, ti\nconviene sfoggiare tutto il \ntuo talento e le tue tecniche\ndi volo.\nTutti qui, me compreso, ci\nsiamo allenati moltissimo per\nimparare a domare i nostri\nsolcanubi!")
          }

          void entrypoint_122_20() {
/*< 58>*/ 	start()
/*< 59>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': -1, 'param3': 24}
          }

          void entrypoint_122_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf("\x0E\x01\x09\x04\x00\x02Nessuno ti ha mai insegnato che\nentrare in casa della gente senza\ninvito è da maleducati?\n\nDurante il giorno di solito lavoro\nal bazar, ma ora la mia bottega\nè chiusa per via del battesimo\ndel volo.\n\x0E\x01\x09\x04\x00\x15Aaah... quando devo lavorare voglio\nsempre prendermi un po' di tempo\nlibero, poi quando ho un giorno di\nvacanza...\nMi rendo conto che non ho niente da\nfare e mi annoio...")
          }

          void entrypoint_122_21() {
/*< 63>*/ 	start()
/*< 68>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 18, 'next': 69, 'param3': 32}
/*< 69>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 116, 'param3': 32}
/*<116>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 117, 'param3': 17}
/*<117>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 74, 'param3': 17}
/*< 74>*/ 	set_camera(2, 0)
/*< 70>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 64, 'param3': 50}
/*< 64>*/ 	printf("\x0E\x01\x09\x04\x1211\x16Tu...<pause0F> Non te ne pentirai!")
/*< 71>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 65, 'param3': 50}
/*< 65>*/ 	printf("\x0E\x01\x09\x04\x1408\x913Non essere sciocco.\nCerto che non lo farò.\n\n\nSecondo me dovremmo andare\na dirlo a tua madre il prima possibile!\nTua madre è proprio come te, vero?\nUna persona onesta e operosa.")
/*< 72>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 66, 'param3': 50}
/*< 66>*/ 	printf("\x0E\x01\x09\x04\x1209\xC18Ah! Forse è un po' presto\nper le presentazioni...")
/*< 73>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 67, 'param3': 50}
/*< 67>*/ 	printf("\x0E\x01\x09\x04\x1400\x05Perché? Non essere sciocco!\nÈ sempre meglio sbrigare questo\ntipo di formalità il prima possibile!\n\n\x0E\x01\x09\x04\x1408\x913Beh, sempre che tu abbia intenzione\ndi invitarmi a casa tua prima o poi!")
          }

          void entrypoint_122_05() {
/*< 11>*/ 	start()
/*< 12>*/ 	printf("\x0E\x01\x09\x04\x00\x01Ehi, Link!\nChe ci fai sveglio a quest'ora?\n\n\n\x0E\x01\x09\x04\x11\x1300Mia madre sta ancora preparando\nla cena... ma quando sarà pronta?\nHo una fame!")
          }

          void entrypoint_122_22() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf("\x0E\x01\x09\x04\x0E\x812Ma che succede?\nLa Dea è scomparsa!\n\n\n\x0E\x01\x09\x04\x0F\xD00A Oltrenuvola sta succedendo\nqualcosa di strano...")
/*< 77>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
          	  case 1:
/*< 78>*/ 		printf("La mia Chicca non è ancora tornata\na casa... sto iniziando a\npreoccuparmi sul serio...\n\n\x0E\x01\x09\x04\x00\x800Link, potresti andarla\na cercare per me?")
          	}
          }

          void entrypoint_122_06() {
/*< 13>*/ 	start()
/*< 83>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*< 84>*/ 		printf("\x0E\x01\x09\x04\x00\x01Ehilà ragazzo.\nQuel Salbot ti è tornato utile?\n\n\nHa una linguaccia terribile, ma\nè un robot dal cuore d'oro!\n\n\nPromettimi che andrete\nd'accordo!")
          	  case 1:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x00\x03Ehilà ragazzo! Che ci fai \nin giro a quest'ora di notte? Se\nnon tieni gli occhi aperti ti farai\nmordere il sedere da un prociatto!\nNoi di Oltrenuvola non andiamo\nmai in giro la notte, a meno che\nnon sia strettamente necessario.")
          	}
          }

          void entrypoint_122_23() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf("Il capo gioca sempre con le sue\nmacchine. Sono la sua passione.\nBzzz.\n\nPerò io lo so qual è il vero motivo:\nsta costruendo una macchina per il\nbucato automatico da regalare a sua\nmadre! Bzzz!\nChe bravo ragazzo, eh? È proprio\nl'opposto di una certa persona che\nsi trascina dietro la signorina\nFaih in giro per il mondo... bzzz!")
          }

          void entrypoint_122_07() {
/*< 14>*/ 	start()
/*< 16>*/ 	printf("\x0E\x01\x09\x04\x00VOh, santo cielo!\nSenti mi fai il favore di parlarci\ntu con lui?")
          	flw_85:
/*< 85>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*< 86>*/ 		printf("Povera illusa! Io pensavo\nche quello avrebbe smesso\ndi giocare con le cianfrusaglie\nora che il robot è riparato.\nE invece no! Chi nasce tondo\nmica muore quadrato!")
          	  case 1:
/*< 22>*/ 		printf("Passa ogni notte seduto\nlì a cercare di riparare quel\nrobot che ha ereditato!\n\nMa che cosa mai potrà\nottenere da quel mucchio di\nferraglia?")
          	}
          }

          void entrypoint_122_24() {
/*< 87>*/ 	start()
/*< 88>*/ 	set_camera(3, 0)
/*< 89>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_122_08() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf("\x0E\x01\x09\x04\x00VAaaah. Ma guarda come\nsi sporca mio figlio...\n\n\nNon m'interessa quanto gli piaccia\nriparare la roba, ogni giorno il bucato\nè pieno di grasso!\n[1]Figlio?[2]Che pena!")
/*< 19>*/ 	switch (choice(2)) {
          	  case 0:
/*< 20>*/ 		printf("Ma quell'incapace di mio figlio che\ngestisce l'officina ovviamente!\nDi chi credevi che stessi parlando?")
          		goto flw_85
          	  case 1:
/*< 21>*/ 		printf("Sto per avere un esaurimento...\nè proprio un ragazzaccio!")
          		goto flw_85
          	}
          }

          void entrypoint_122_25() {
/*< 90>*/ 	start()
/*< 92>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*< 95>*/ 		switch (scene_flags[45 /* 0x4 20 */]) {
          		  case 0:
/*< 94>*/ 			printf("\x0E\x01\x09\x04\x00\x1101Non dovresti andare in cerca\ndel tuo solcanubi?")
          		  case 1:
/*< 93>*/ 			printf("\x0E\x01\x09\x04\x00\x1104Ma perché stavate bisticciando\nlaggiù? Sembrava una cosa seria...")
          		}
          	  case 1:
/*< 91>*/ 		printf("\x0E\x01\x09\x04\x00\x05Adoro starmene seduto qui.\n\n\n\nSeduto qui a pensare a lei!\n\n\n\n\x0E\x01\x09\x04\n\xC00<b<Pepa>>, lì alla taverna delle zucche,\nè la più bella di tutte!")
          	}
          }

          void entrypoint_122_09() {
/*< 23>*/ 	start()
/*< 79>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*< 80>*/ 		printf("\x0E\x01\x09\x04\x00\x01Ciao, Link.\nNon hai mica visto Chicca,\nvero? Corre sempre in giro!\nMi preoccupo...")
          	  case 1:
/*< 24>*/ 		printf("\x0E\x01\x09\x04\x00\nOh. Ciao, Link.\nCome stai? Non trovo più la\nmia Chicca, tu l'hai vista?\n\nSta sempre a correre di qua\ne di là e ora l'ho persa...\n\n\nMi fa preoccupare, non so\nmai se sta bene o se le è\nsuccesso qualcosa...")
          	}
          }

          void entrypoint_122_26() {
/*< 96>*/ 	start()
/*< 97>*/ 	set_camera(4, 0)
/*< 98>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_122_27() {
/*<101>*/ 	start()
/*<195>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<197>*/ 		switch (story_flags[1116 /* us: 805A9B57 0x04, jp: 805ACDD7 0x04 */]) {
          		  case 0:
/*<198>*/ 			entrypoint_118_12();
          		  case 1:
          			flw_102:
/*<102>*/ 			printf("\x0E\x01\x09\x04\x00\x04Ah! Sei tu! La Dea se n'è andata!\n\n\n\n\x0E\x01\x09\x04\x00\x11Se n'è andata perché Chicca non è\nstata a sentire la mamma e il papà?")
/*<196>*/ 			story_flags[1116 /* us: 805A9B57 0x04, jp: 805ACDD7 0x04 */] = true;
          		}
          	  case 1:
          		goto flw_102
          	}
          }

          void entrypoint_122_10() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf("\x0E\x01\x09\x04\x00\x01Ciao, Link!\nQui ci abita Chicca!\n\n\nOggi Chicca va a giocare di nuovo\ncon gli amichetti! Lei si diverte un\nsacco a giocare!")
          }

          void entrypoint_122_28() {
/*<103>*/ 	start()
/*<104>*/ 	printf("\x0E\x01\x09\x04\x09\x30AOooooiiiii!\n\n\n\n\x0E\x01\x09\x04ÿ\xFF04Aaah...<pause14> beh, non c'è niente di male\na stare seduti...\n\n\n\x0E\x01\x09\x04ÿ\x3FF... Ma quel divano ha un valore\ninestimabile, quindi non sporcarlo\nse non vuoi cacciarti nei guai!")
          }

          void entrypoint_122_11() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf("\x0E\x01\x09\x04\x00\x11Aaarrgh!\nQuello è il signor Demone!")
          }

          void entrypoint_122_29() {
/*<105>*/ 	start()
/*<109>*/ 	set_camera(5, 0)
/*<106>*/ 	printf("Se sei qui per mangiare,\nla cucina è già chiusa!\nDevi aspettare fino all'ora\ndi pranzo!")
          }

          void entrypoint_122_12() {
/*< 29>*/ 	start()
/*<189>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<190>*/ 		printf("\x0E\x01\x09\x04\x00\x01Oh, ciao Link!\nProva a guardarti intorno!\n\n\nÈ tutto così tranquillo, ora che i mostri\nsono scomparsi.\n\n\nEra da tantissimo tempo che non\nfacevo una bella passeggiata nella\nquiete della sera!")
          	  case 1:
/*< 43>*/ 		switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          		  case 0:
          			flw_42:
/*< 42>*/ 			printf("\x0E\x01\x09\x04\x00\x01Sono così felice che tu sia riuscito\na ritrovare Chicca sana e salva!\n\n\n\x0E\x01\x09\x04\x00\x09Grazie mille!\nMa guardala. Fa stare in pena i suoi\ngenitori e lei se la dorme come un\nangioletto.")
          		  case 1:
/*< 99>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<115>*/ 				switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          				  case 0:
          					goto flw_42
          				  case 1:
/*<100>*/ 					printf("\x0E\x01\x09\x04\x00\x0ESei sicuro?!\nHai ritrovato Chicca?!\n\n\nTe l'avevo detto, no? Qui a\nOltrenuvola siamo tutte\nbrave persone!")
          				}
          			  case 1:
/*< 40>*/ 				switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          				  case 0:
/*< 41>*/ 					printf("\x0E\x01\x09\x04\x00\x04Ma dove si è cacciata Chicca?!\n\n\n\nSì, sua madre continua a ripetere\nche è stata rapita, ma ho la netta\nsensazione che non si tratti di\nun sequestro.\n\x0E\x01\x09\x04\x0E\xD00Il fatto è che qui a Oltrenuvola\nnessuno, e dico nessuno,\nsarebbe in grado di fare\nuna cosa del genere!\n\x0E\x01\x09\x04\x00\xD0FHo la sensazione che\nChicca stia per tornare\na casa da un momento\nall'altro...\nComunque, se la vedi in\ngiro portala subito a casa!")
          				  case 1:
/*< 30>*/ 					printf("\x0E\x01\x09\x04\x00\x01Ehilà, Link!\nGuarda Chicca come dorme...\nQuant'è bella!\n\nMi basta guardarla un attimo\ne mi sento come se potessi\nlavorare il doppio!\n\nMa... chi è questo demone di\ncui parla...?")
          				}
          			}
          		}
          	}
          }

          void entrypoint_122_13() {
/*< 31>*/ 	start()
/*< 61>*/ 	switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          	  case 0:
/*<188>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 60, 'param3': 31}
/*< 60>*/ 		printf("\x0E\x01\x09\x04\x00\x12Aaah. Ancora non riusciamo a\ntrovare Chicca!\n\n\nTi prego, trova Chicca\ne riportala qui!")
          	  case 1:
/*< 32>*/ 		printf("\x0E\x01\x09\x04\x00\x01Buona sera.\nC'è qualcosa che non va?\nÈ molto tardi...")
          	}
          }

          void entrypoint_122_30() {
/*<107>*/ 	start()
/*<110>*/ 	set_camera(6, 0)
/*<108>*/ 	printf("Se sei qui per mangiare,\nla cucina è già chiusa!\nDevi aspettare fino all'ora\ndi pranzo!")
          }

          void entrypoint_122_14() {
/*< 33>*/ 	start()
/*<122>*/ 	switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          	  case 0:
/*<121>*/ 		printf("\x0E\x01\x09\x04\x00\x02Ciao, Link!\nChicca è tornata sana e salva a casa!\n\n\nSei stato tu a trovarla?\n\n\n\n\x0E\x01\x09\x04\x10\xD09Grazie! Sua madre è felicissima!")
          	  case 1:
/*<118>*/ 		switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          		  case 0:
/*<119>*/ 			printf("\x0E\x01\x09\x04\x0F\xD12Oh, ciao Link...\nLa nostra Chicca è scomparsa...\n\n\n\x0E\x01\x09\x04ÿ\xFF00Sua madre va in giro gridando\nche è stata rapita...\n\n\n\x0E\x01\x09\x04\x10\xD03Ma io la conosco quella bimba.<pause0A>\nSono sicuro che si è nascosta \nda qualche parte a giocare...")
/*<120>*/ 			printf("\x0E\x01\x09\x04\x0F\xD00Comunque se la trovi,\navvisami, va bene?")
          		  case 1:
/*<171>*/ 			switch (zone_temp_flags[14 /* 0x0 40 */]) {
          			  case 0:
/*<172>*/ 				printf("\x0E\x01\x09\x04\x00\x02Salve, Link.\n\n\n\nQuesta è la <r<Torre della luce>>!\nChe ne dici di provare a salirci?\n\n\nÈ bello stare quassù!")
          			  case 1:
/*< 34>*/ 				printf("\x0E\x01\x09\x04\x00\x02Ehilà, Link.\n\n\n\nQuesto edificio si chiama <r<Torre\ndella luce>>. A quanto pare, serve\na indicare i luoghi di Oltrenuvola.\n\n\x0E\x01\x09\x04\x0F\xD00Chissà perché si chiama così?\nIo non vedo nessuna luce...\nSecondo te chi potrebbe aver\ncostruito un posto come questo?\n\x0E\x01\x09\x04\x10\xD00Ehi, perché non provi a\nsalire in cima? Da lassù si\npuò vedere la Dea in tutto il\nsuo splendore.")
/*< 35>*/ 				printf("\x0E\x01\x09\x04\x0F\xD05Secondo te dovrei salirci io?!\n\n\n\n\x0E\x01\x09\x04\x00\x800Ma sei matto!\nSoffro di vertigini!")
          			}
          		}
          	}
          }

          void entrypoint_122_31() {
/*<123>*/ 	start()
/*<124>*/ 	printf("\x0E\x01\x12\x04\x00dOh! L'ingresso al vulcano!<pause1E>\nFarei meglio ad arrivarci\nprima del mio padrone verde! Bzzz!")
          }

          void entrypoint_122_15() {
/*< 36>*/ 	start()
/*< 44>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 37, 'next': 45, 'param3': 32}
/*< 45>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 38, 'next': 46, 'param3': 32}
/*< 46>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 39, 'next': 62, 'param3': 32}
/*< 62>*/ 	set_camera(1, 0)
/*<179>*/ 	switch (story_flags[33 /* us: 805A9ADD 0x02, jp: 805ACD5D 0x02 */]) {
          	  case 0:
/*<176>*/ 		{'type': 'type3', 'subType': 1, 'param1': 37, 'param2': -1, 'next': 173, 'param3': 16}
/*<173>*/ 		printf("\x0E\x01\x09\x04\x2507\x707Hai sentito?! Il solcanubi di uno\ndegli studenti che deve partecipare\nal battesimo del volo è scomparso!")
/*<177>*/ 		{'type': 'type3', 'subType': 1, 'param1': 38, 'param2': -1, 'next': 174, 'param3': 16}
/*<174>*/ 		printf("\x0E\x01\x09\x04\x2607\x701Davvero?\nChe brutta cosa!")
/*<178>*/ 		{'type': 'type3', 'subType': 1, 'param1': 39, 'param2': -1, 'next': 175, 'param3': 16}
/*<175>*/ 		printf("\x0E\x01\x09\x04\x2707\x702A me i volatili non piacciono...\nQuando vedo i loro artigli minacciosi\nmi viene subito paura!")
          	  case 1:
/*< 47>*/ 		{'type': 'type3', 'subType': 1, 'param1': 37, 'param2': -1, 'next': 37, 'param3': 16}
/*< 37>*/ 		printf("\x0E\x01\x09\x04\x2507\x707Ma guarda che bella giornata!\nE io qui che non posso godermela,\ncon tutto quello che ho da fare!")
/*< 48>*/ 		{'type': 'type3', 'subType': 1, 'param1': 38, 'param2': -1, 'next': 38, 'param3': 16}
/*< 38>*/ 		printf("\x0E\x01\x09\x04\x2607\x701E non sei la sola! Ho ancora una\nmontagna di panni sporchi di\nquell'ostinato di mio figlio da lavare!\n\nE hai voglia a strofinare, mica escono\npuliti!")
/*< 49>*/ 		{'type': 'type3', 'subType': 1, 'param1': 39, 'param2': -1, 'next': 39, 'param3': 16}
/*< 39>*/ 		printf("\x0E\x01\x09\x04\x2707\x702Oh, cara mia, e come fai?\nLavare e pulire sono le faccende\npiù noiose.\n\nQuanto vorrei avere qualcuno che lo\nfaccia al posto mio!")
          	}
          }

          void entrypoint_122_32() {
/*<180>*/ 	start()
/*<182>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 7, 'next': 186, 'param3': 32}
/*<186>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 7, 'next': 187, 'param3': 17}
/*<187>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 183, 'param3': 6}
/*<183>*/ 	{'type': 'type3', 'subType': 1, 'param1': 7, 'param2': 99, 'next': 185, 'param3': 16}
/*<185>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1802, 'param2': 3072, 'next': 184, 'param3': 13}
/*<184>*/ 	set_camera(9, 0)
/*<181>*/ 	printf("\x0E\x01\x09\x04\x70A\xC12Uhm...\n\x0E\x01\x08\x02\xFECDMa dove diavolo sarà andata?")
          }

          void entrypoint_122_16() {
/*< 50>*/ 	start()
/*<152>*/ 	switch (temp_flags[52 /* 0x7 10 */]) {
          	  case 0:
/*<153>*/ 		printf("Dai! Potresti almeno fare due\nchiacchiere con me!")
          	  case 1:
/*<141>*/ 		printf("Oh oh oh! \nCome va? Ti stai impegnando?\nTi andrebbe una bibita?\n[1]Sì[2-]No")
/*<142>*/ 		switch (choice(2)) {
          		  case 0:
/*<144>*/ 			printf("\x0E\x01\x09\x04\x01\x700Oh oh oh!\nEccoti servito!")
/*<148>*/ 			{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 30, 'next': 147, 'param3': 47}
/*<147>*/ 			set_camera(8, 0)
/*<160>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 115, 'next': 150, 'param3': 24}
/*<150>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 149, 'param3': 6}
/*<149>*/ 			{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 30, 'next': 159, 'param3': 48}
/*<159>*/ 			make_actor_do_something(0, 0)
/*<145>*/ 			printf("\x0E\x01\x09\x04\x07\x700Che velocità!\nEra di tuo gradimento, immagino!")
/*<146>*/ 			set_camera(-1, 0)
/*<154>*/ 			switch (random(4)) {
          			  case 0:
/*<155>*/ 				printf("Bene. Lascia che ti racconti qualcosa\nche potrebbe interessarti...\n\n\nMentre voli in cielo, potresti\nimbatterti in alcune <r<pietre forate>>.\n\n\n\x0E\x01\x09\x04\x01\x700All'interno di quei fori, si accumula\nun'energia sconosciuta...\n\n\nSe ci passi dentro con il tuo\nsolcanubi, verrete sparati\nfuori a gran velocità!\n\n\x0E\x01\x09\x04\x07\x700I cavalieri più esperti le usano per\nraggiungere luoghi lontanissimi\nin men che non si dica!")
          				flw_151:
/*<151>*/ 				temp_flags[52 /* 0x7 10 */] = true;
          			  case 1:
/*<156>*/ 				printf("Bene. Lascia che ti racconti qualcosa\nche potrebbe interessarti...\n\n\n\x0E\x01\x09\x04\x01\x700In cielo, insieme a Oltrenuvola,\nfluttuano una miriade di piccole\nisole. Nessuno sa però come siano\ncomparse né quanto tempo fa... \n\x0E\x01\x09\x04\x07\x700L'unica cosa che posso dirti con\ncertezza è che se tutti viviamo in\npace, il merito è solo della nostra Dea.")
          				goto flw_151
          			  case 2:
          				flw_53:
/*< 53>*/ 				printf("Oooh, vuoi sapere una cosa?\n\n\n\nDalla scuola d'armi che frequenti\nescono i migliori cavalieri. Già.\n\n\nE quando sarai un cavaliere a tutti\ngli effetti, anche tu potrai solcare\ni cieli in qualità di grande\ndifensore di Oltrenuvola.\nForse li hai già incontrati: se\ncadi giù in cielo, la squadra\ndi soccorso è sempre pronta\nad aiutarti!\n\x0E\x01\x09\x04\x01\x700Ma solo i migliori allievi della\nscuola d'armi possono ambire a \nfar parte della squadra di soccorso.\n\nSpero che un giorno tu possa diventare\nun cavaliere provetto come loro!\n\n\n\x0E\x01\x09\x04\x07\x700Non voglio nasconderti niente...\nAnche mio nipote è un cavaliere!\nSapessi come ne sono orgoglioso!\n<pause05>Fiu<pause05> Fiu!")
          				goto flw_151
          			  case 3:
/*<158>*/ 				switch (scene_flags[85 /* 0xB 20 */]) {
          				  case 0:
/*<157>*/ 					printf("Bene. Lascia che ti racconti qualcosa\nche potrebbe interessarti...\n\n\nHai mai usato una di quelle <y<pozioni\nlevafatica >>che si vendono alla bottega\ndelle pozioni?\n\n\x0E\x01\x09\x04\x01\x700È una pozione che impedisce che il\ntuo vigore si riduca...\n\n\nScommetto che pensavi che servisse\na correre più veloce, vero?\n\n\n\x0E\x01\x09\x04\x07\x700E invece puoi usarla senza problemi\nanche per effettuare attacchi rotanti\ncontro gli avversari più forti!")
          					goto flw_151
          				  case 1:
          					goto flw_53
          				}
          			}
          		  case 1:
/*<143>*/ 			printf("Perché?\nPerché mi tratti così?")
          		}
          	}
          }

          void entrypoint_122_33() {
/*<191>*/ 	start()
/*<192>*/ 	printf("\x0E\x01\x09\x04\x00\x01Ohh... Link!\nFinora non ho mai avuto l'abitudine di\nuscire a passeggiare di notte...\n\nSono contento, però, che adesso anche\ndi sera non ci siano più in giro i mostri!")
          }

          void entrypoint_122_17() {
/*< 51>*/ 	start()
/*< 52>*/ 	printf("Vuoi qualcosa da mangiare?\nQui si mangia benissimo!\n\n\nL'unico problema è che il\nservizio è lentissimo!")
          }

          void entrypoint_122_00() {
          	start()
/*<  1>*/ 	printf("\x0E\x01\x09\x04\x00\x01Ora bisogna aggiungere solo\nun pizzico di pepe...\n\x0E\x01\x09\x04\x00\x04Perfetto! C'è da leccarsi i baffi!")
          }

          void entrypoint_122_18() {
/*< 54>*/ 	start()
/*< 55>*/ 	printf("\x0E\x01\x09\x04\x00\x04Che brutta cera che hai,\nLink.\n\n\nSì, so come ti senti, ma... alla mia età\nnon è mica facile!\n\n\n\x0E\x01\x09\x04\x01\xD00Comunque se vuoi venire qui a\nriposarti, sei il benvenuto.")
          }

