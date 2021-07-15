          void entrypoint_111_01() {
          	start()
/*< 12>*/ 	switch (story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */]) {
          	  case 0:
/*< 18>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
          			flw_19:
/*< 19>*/ 			printf("Wat? Maar ik heb je net je voorspelling\nverteld. Ik heb alles tot in het kleinste\ndetail beschreven. Heb je dat niet\ngehoord?!\nOké... Ik vertel 'm je nog één keer, dus\nzorg ervoor dat je deze keer wel oplet!\nEn denk maar niet dat ik het niet zie als\nje dat niet doet.")
/*<162>*/ 			zone_temp_flags[3 /* 0x1 08 */] = false;
          			flw_74:
/*< 74>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*< 76>*/ 				printf("Jongeman, wat heb je gedaan?\n\n\n\nAls mijn ogen me niet bedriegen, ben\njij verantwoordelijk voor de verdwijning\nvan het eiland van de godin. Jaaa...\nIk zie werkelijk alles.\nMaar maak je geen zorgen. Ik zie dat\nje het eiland niet zomaar voor de lol\nhebt laten verdwijnen.\n\nHelaas moet je vanaf nu zelf je pad\nzien te vinden. Heb vertrouwen in\njezelf!")
          				flw_127:
/*<127>*/ 				entrypoint_111_05();
          			  case 1:
/*<137>*/ 				switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          				  case 0:
/*<138>*/ 					printf("O jaaaa... Volgens mijn visioen vind je\nwat je zoekt op het eiland van de godin.\n\n\nMaar deze grote, geweldige ogen zien\nook veel gevaar. Je pad wordt niet licht.\nBereid jezelf goed voor!")
          					goto flw_127
          				  case 1:
/*< 73>*/ 					switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          					  case 0:
/*<136>*/ 						printf("Ik zie dat je eindelijk de laatste\nbeproeving hebt voltooid. O, jaaa...\nIk zie alles!\n\nIk zie waar je op uit bent. Je wilt\nweten wat je kunt doen met het\nvoorwerp dat je door de beproeving\nhebt gekregen, of niet?\nErgens op Skyloft staat een <r<beeld van\neen vreemde vogel >>met <r<edelstenen als\nogen>>, al is een van die stenen momenteel\nweg.\nJe hebt het beeld vast al eens gezien...\nAls je je nieuwe voorwerp in de oogkas\nstopt, wordt je pad onthuld! Jaaaa... Ik\nzie het voor me...")
          						goto flw_127
          					  case 1:
/*< 72>*/ 						switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          						  case 0:
/*<129>*/ 							printf("Je gebruikt het lied dat je van de grote\nzwemmer boven de wolken hebt\nbemachtigd, om de<r< locatie van de\nvolgende beproeving >>te vinden.\nMijn visioen toont me dat deze beproeving\n<r<ergens hier op Skyloft>> op je wacht.\nWat vreemd! Ik heb geen idee wat\ndat betekent!")
          							goto flw_127
          						  case 1:
/*<199>*/ 							switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          							  case 0:
/*<198>*/ 								switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          								  case 0:
/*<200>*/ 									switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          									  case 0:
/*<201>*/ 										printf("O, daar is het! Jaaaa, ik zie dat je drie\ndelen van het lied gevonden hebt en het\nvierde deel... wordt bewaakt door iemand\ndie heel, heel groot is.\nSchiet op, want zodra je dit gigantische\nwezen hebt gevonden, is je lied compleet.\nIk heb het in je toekomst gezien!")
          										goto flw_127
          									  case 1:
          										flw_71:
/*< 71>*/ 										switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          										  case 0:
/*< 77>*/ 											check_item_flag(497, 1)
/*< 78>*/ 											switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 52}) {
          											  case 0:
/*< 79>*/ 												printf("Ik zie de taak die je moet voltooien,\njongeman... O ja, ik zie alles...\n\n\nJe zoekt een plek om wortels te planten?\nMaar dit zijn de wortels van een\nbijzondere boom, nietwaar? Waar kan\ndeze boom goed groeien?\n\x0E\x01\x06\x02\xFCCDIk zie...\x0E\x01\x06\x02Í een tempel! Een tempel waar\neen oude vrouw nu woont. Ja, daar vind\nje de perfecte plek.")
          												flw_88:
/*< 88>*/ 												entrypoint_111_05();
          											  case 1:
/*< 75>*/ 												printf("Jongeman, je zoekt een lied dat in\nvier delen is opgedeeld, nietwaar?\nJa, jaaa... Ik zie alles.\n\nDan moet je een... twee...<pause0A> drie regio's\nbezoeken! Je mag zelf weten in welke\nvolgorde je dat doet!\n\nIn andere woorden: kies zelf waar je\npad naartoe leidt. Je vindt ongetwijfeld\niets interessants.")
          												goto flw_88
          											}
          										  case 1:
/*< 70>*/ 											switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          											  case 0:
/*<128>*/ 												printf("Je hebt eindelijk de persoon gevonden\nwaar je naar op zoek was! Wat een\ngeweldig nieuws.\n\nMaar je bent nog niet klaar! Je moet\nnog praten met de grote reus die\nboven de wolken zwemt.\n\nAls je meer wilt weten, moet je met\nde <r<rector van de ridderacademie\n>>spreken.")
          												flw_126:
/*<126>*/ 												entrypoint_111_05();
          											  case 1:
/*< 66>*/ 												switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          												  case 0:
/*< 69>*/ 													printf("Oei... Ik zie de schaduw van een\ngigantisch monster...\n\n\nKnul, hoe vaak ik ook in je toekomst\nkijk, ik word telkens weer verrast.\n\n\nO, sorry. Je toekomst is natuurlijk\ngeen vermaak voor mij, al vermaakt\nhij mij. Maar als je genoeg <r<drankjes\n>>meeneemt, komt het goed!")
          													goto flw_126
          												  case 1:
/*<183>*/ 													switch (story_flags[73 /* us: 805A9AE9 0x40, jp: 805ACD69 0x40 */]) {
          													  case 0:
/*< 90>*/ 														switch (story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */]) {
          														  case 0:
/*< 92>*/ 															switch (story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */]) {
          															  case 0:
/*<179>*/ 																switch (story_flags[187 /* us: 805A9AE9 0x04, jp: 805ACD69 0x04 */]) {
          																  case 0:
/*<180>*/ 																	printf("Aha! Door mijn alziende ogen is je\ntoekomst volledig helder voor mij,\njongeman.\n\nZoals altijd is het ongelofelijk warm\nin de in vlammen gehulde berg. Het zou\nheel slim zijn om een <r<ijzeren schild >>mee\nte nemen!")
          																	flw_186:
/*<186>*/ 																	entrypoint_111_05();
          																  case 1:
/*<188>*/ 																	switch (story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */]) {
          																	  case 0:
/*<187>*/ 																		printf("Ik zie je toekomst, jaaa... Ik zie je bij een\nvurige berg, met een vat vol water.\n\n\nEn.. O, ja! Als je dit water niet bezorgt,\nkan dit problemen opleveren voor iemand\nanders!")
          																		goto flw_186
          																	  case 1:
/*< 93>*/ 																		printf("Water, geen water... maar je hebt water\nnodig! Wat een hitte! Het ziet er niet\ngoed uit.\n\nMaar, jongeman, je hebt al het watervat\nontdekt dat je nodig hebt om het water te\nvervoeren.\n\nJa, ja... Ik begrijp het nu. Vergeet niet...\ndeze ogen zien ALLES! Ga naar het woud,\nwant daar vind je wat je zoekt.")
/*< 94>*/ 																		switch (story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */]) {
          																		  case 0:
          																			goto flw_186
          																		  case 1:
/*<123>*/ 																			{'type': 'type3', 'subType': 1, 'param1': 90, 'param2': 0, 'next': 178, 'param3': 51}
/*<178>*/ 																			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 95, 'param3': 16}
/*< 95>*/ 																			printf("Ik acht het 60% zeker dat het object dat u\nzoekt, zich in het woud bevindt. Ik raad u\naan om hier te zoeken.\n\n<pling>Wilt u dat ik uw <r<detectiefunctie >>kalibreer\nom naar het <r<bad>> te zoeken?\n[1]Ja![2-]Nee, bedankt.")
/*< 97>*/ 																			switch (choice(2)) {
          																			  case 0:
/*< 99>*/ 																				story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = true;
/*<100>*/ 																				story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<101>*/ 																				story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<102>*/ 																				story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<103>*/ 																				story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<104>*/ 																				story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<189>*/ 																				open_dowsing_wheel(13)
/*< 96>*/ 																				printf("\x0E\x01\x12\x04\x00\x05Ja, meester. Met uw <r<detectiefunctie>> kunt u nu ook het\n<r<bad>> detecteren. Ik stel voor dat u zo snel mogelijk op\nzoek gaat.")
/*<190>*/ 																				story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          																				flw_105:
/*<105>*/ 																				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 125, 'param3': 36}
/*<125>*/ 																				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 124, 'param3': 16}
/*<124>*/ 																				entrypoint_111_05();
          																			  case 1:
/*< 98>*/ 																				printf("\x0E\x01\x12\x04\x00\x05Ja, meester. Ik heb uw verzoek om de\ndetectiefunctie in te stellen, geannuleerd.\nAls u hierover van gedachten verandert,\nspreek dan opnieuw met dit wezen.")
          																				goto flw_105
          																			}
          																		}
          																	}
          																}
          															  case 1:
/*< 91>*/ 																printf("O, ik zie dat je de vuurbeproeving met\ngemak hebt doorstaan. Maar je bent er\nnog niet. O jee, ik zie waterproblemen!\n\nJaaa... Gebrek aan water levert veel\nproblemen op. Als dit gebeurt, kom me\ndan nog eens bezoeken.")
          																flw_89:
/*< 89>*/ 																entrypoint_111_05();
          															}
          														  case 1:
/*< 68>*/ 															printf("Jeetje! Hoeveel van deze beproevingen\nmoet je ondergaan voor je tevreden\nbent?!\n\nDeze keer zie ik... vuur! Je vindt <r<de\ntoegang tot een beproeving>> onder een\nvurige berg!\n\nNatuurlijk neem je geen <r<houten schild\n>>mee, dat zou dwaas zijn!")
          															goto flw_89
          														}
          													  case 1:
/*< 65>*/ 														switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          														  case 0:
/*<184>*/ 															printf("Mijn grote, kristalheldere ogen zien het\npad dat je gaat betreden! Je moet een\n<r<lied >>leren op een heilige plaats!\n\nMaar wat is dat? Mijn visioen toont me\ndat het een plaats is waar je al eerder\nbent geweest. Een heilige plaats omgeven\ndoor wolken...")
          															flw_185:
/*<185>*/ 															entrypoint_111_05();
          														  case 1:
/*<181>*/ 															switch (story_flags[72 /* us: 805A9AE9 0x20, jp: 805ACD69 0x20 */]) {
          															  case 0:
/*<205>*/ 																switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          																  case 0:
/*<206>*/ 																	printf("Oho! Zo te zien heb je een beproeving op\neen zanderige plek voltooid. Maar je bent\ner nog niet. Ik zie nog meer in je\ntoekomst!\nHm... Je moet naar een plek gaan met\nNOG meer zand. Maar ik zie ook een\n<r<zandoppervlakte>>... <pause14>En een <r<schip>>!<pause14> Wat een\nverwarrend visioen...\nNou ja, je moet eerst opnieuw naar een\nzanderige plek gaan!")
          																	goto flw_185
          																  case 1:
/*< 67>*/ 																	printf("Wat kun je verwachten? Ik zal eens\nvoor je kijken... Je vindt <r<de toegang tot\neen beproeving >>verborgen in een\nzanderige plaats!\nMeer zie ik niet in mijn visioen. Deze\nogen; ze zien veel. Je volgende\nbestemming is een plek overspoeld\nmet zand.")
          																	goto flw_185
          																}
          															  case 1:
/*< 64>*/ 																switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          																  case 0:
/*<182>*/ 																	printf("Mijn grote, kristalheldere ogen zien het\npad dat je gaat betreden! Je moet een\n<r<lied >>leren op een heilige plaats!\n\nMaar wat is dat? Mijn visioen toont me\ndat het een plaats is waar je al eerder\nbent geweest. Een heilige plaats omgeven\ndoor wolken...")
          																	flw_87:
/*< 87>*/ 																	entrypoint_111_05();
          																  case 1:
/*< 62>*/ 																	switch (story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */]) {
          																	  case 0:
/*<203>*/ 																		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          																		  case 0:
/*<204>*/ 																			printf("O! Ik zie dat je de beproeving in het\nwoud hebt voltooid. Jaaa... Voor deze\nogen kun je niks verbergen!\n\nMijn visioen toont me een<r< grote boom\n>>midden in het woud. Daar vind je een\nbelangrijk individu.\n\nEn een groot stenen beeld...<pause14> Jaaa...\nOnder de grond...<pause14> Omhoog, omlaag...\nIk zie veel activiteit in je toekomst.\n\nMaar zorg eerst dat je op de plek met de\nvele bomen komt!")
          																			goto flw_87
          																		  case 1:
/*< 63>*/ 																			printf("Jongeman, ik zie het pad dat voor je ligt.\nJe zult een beproeving onder ogen zien!\nJaaa... Diep in de schaduwen. Een\nangstaanjagende beproeving...\nGa het woud in! Daar vind je de\nbeproeving...")
          																			goto flw_87
          																		}
          																	  case 1:
/*< 60>*/ 																		switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          																		  case 0:
/*< 61>*/ 																			printf("Twee wervelende zeilen kijken uit op een\ntoren. Op die toren speel je een deuntje\nen... ik zie licht! Een prachtig licht!\n\nHet licht toont het pad dat je moet\nvolgen!")
/*<202>*/ 																			entrypoint_111_05();
          																		  case 1:
/*<175>*/ 																			switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          																			  case 0:
/*< 57>*/ 																				switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          																				  case 0:
/*< 58>*/ 																					printf("Jaaaa... Je bent naar iets op zoek. Ik zal\nin je toekomst kijken...\n\n\nIk zie... een propeller die door een zee\nvan wolken valt... Eenzaam, versleten,\naan de elementen overgelaten...\n\nJaaa... Ik zie een <r<in vlammen gehulde\nberg>>... Ik zie een tempel op deze berg!\nWat je zoekt, bevindt zich <r<op de berg,\nlager dan deze tempel>>...\nEen in vlammen gehulde berg... Zou zoiets\necht bestaan?")
/*<120>*/ 																					switch (story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */]) {
          																					  case 0:
/*<121>*/ 																						entrypoint_111_05();
          																					  case 1:
/*<111>*/ 																						{'type': 'type3', 'subType': 1, 'param1': 90, 'param2': 0, 'next': 177, 'param3': 51}
/*<177>*/ 																						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 108, 'param3': 16}
/*<108>*/ 																						printf("")
/*<109>*/ 																						switch (choice(2)) {
          																						  case 0:
/*<112>*/ 																							story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<113>*/ 																							story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<114>*/ 																							story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<115>*/ 																							story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<116>*/ 																							story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<117>*/ 																							story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<191>*/ 																							open_dowsing_wheel(13)
/*<193>*/ 																							printf("")
/*<192>*/ 																							story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          																							flw_118:
/*<118>*/ 																							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 122, 'param3': 36}
/*<122>*/ 																							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 119, 'param3': 16}
/*<119>*/ 																							entrypoint_111_05();
          																						  case 1:
/*<110>*/ 																							printf("")
          																							goto flw_118
          																						}
          																					}
          																				  case 1:
/*<194>*/ 																					switch (story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */]) {
          																					  case 0:
/*<195>*/ 																						printf("Eens even kijken... Je zoekt iets om een\ngebroken object mee te repareren. Jaaa...\n\n\nIk zie een <y<oerbloem>>\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\n\n\n\nIn mijn visioen zie ik oerbloemen bloeien\nin lang vervlogen tijden, waar nu enkel\n<r<zand >>te vinden is.<pause14> Als je in het zand zoekt,\nvind je er een!")
          																						flw_86:
/*< 86>*/ 																						entrypoint_111_05();
          																					  case 1:
/*< 59>*/ 																						printf("Jaaa... Ik zie bouwwerken met grote,\nwervelende zeilen. Iets creëert een\nwindvlaag en de bouwwerken...\ndraaien!\nDe twee bouwwerken kijken uit op...\neen toren!")
          																						goto flw_86
          																					}
          																				}
          																			  case 1:
/*< 56>*/ 																				switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          																				  case 0:
/*<176>*/ 																					printf("Ja... Je hebt een grote hindernis\ngenomen en bent daar natuurlijk blij\nmee.\n\nJe volgende avontuur wordt.. <pause1E>Ooooo!\nDe <r<Ballade van de Godin>>... <pause1E> Ik zie dat\nje er meer over wilt weten!\n\nMaar je vraagt je vast af wie je er meer\nover kan vertellen.\n\n\nIn mijn kristallen bol zie ik... de <r<rector\nvan de ridderacademie>>! Hij is degene\nmet wie je moet praten, jaaaa...")
          																					flw_85:
/*< 85>*/ 																					entrypoint_111_05();
          																				  case 1:
/*< 36>*/ 																					switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          																					  case 0:
/*< 37>*/ 																						printf("Op de plek waar je naartoe reist...\n\n\n\nOntwaakt iets groots? Hm?<pause1E> Het is\nreusachtig... <pause14>Ja, je kunt het niet\nmissen, hoor! <pause28>Het is kolossaal!\n\nIk zie dat je maar beter wat <r<genees-\ndrankjes >>mee kunt nemen. O, jaaaa...\nIk voorspel dat die je enorm zullen\nhelpen.")
          																						goto flw_85
          																					  case 1:
/*< 35>*/ 																						switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          																						  case 0:
/*< 34>*/ 																							printf("Ik zie een plek met veel... ZAND! Hm,\nzand? Is het een zandbak? Een\ngigantische zandbak?\n\nNou, wat het ook is, het is een verlaten\nplek waar je problemen zult hebben\nmet elektriciteit...\n\nAan ijzer heb je er niet veel. Ik zie dat\neen <r<houten schild >>of een sterker schild\nbeter van pas komt...\n\nEn je hebt er mogelijk wat bommen\nnodig. Zorg ervoor dat je verscheidene\n<r<bommenzakken>> bij je hebt.")
          																							goto flw_85
          																						  case 1:
/*< 22>*/ 																							switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          																							  case 0:
/*< 23>*/ 																								printf("Jongeman, mijn ogen zien... Vlammen!\nRook! Hitte! Dat is mijn visioen van je\ntoekomst...\n\nEen houten schild kan je hier niet voor\nbeschutten... IJzer! Je hebt een <r<ijzeren\nschild >>nodig om jezelf te beschermen!\n\nEn als je wat <r<drankjes >>meeneemt om je\n<r<energie mee te herstellen>>, komen die vast\nook goed van pas...")
/*< 84>*/ 																								entrypoint_111_05();
          																							  case 1:
/*< 16>*/ 																								printf("Jongeman, sta je op het punt om naar\neen dichtbebost gebied te gaan? Ergens\nvol groen? Jaaaa... Mijn ogen zien alles...\n\nBomen! Zoveel bomen!<pause14> Ja. <pause0A>Overal... Het\nis geen slecht idee om voor je vertrek een\n<r<houten schild >>te kopen.\n\nIk zie dat je zelf nog jong en zo groen als\ngras bent, dus het kan ook geen kwaad om\neen <r<geneesdrankje >>mee te nemen.")
/*< 83>*/ 																								entrypoint_111_05();
          																							}
          																						}
          																					}
          																				}
          																			}
          																		}
          																	}
          																}
          															}
          														}
          													}
          												}
          											}
          										}
          									}
          								  case 1:
          									goto flw_71
          								}
          							  case 1:
          								goto flw_71
          							}
          						}
          					}
          				}
          			}
          		  case 1:
/*< 31>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 13, 'param3': 12}
/*< 13>*/ 			printf("\x0E\x01\x09\x04\x00\x03Jij daar! Ja, ik zie je wel! Kom hier, dan\nvoorspel ik je toekomst. Het kost maar\n<r<10 rupees >>om licht te werpen op je in\nschaduwen gehulde lot.\nWil je weten wat deze grote, mooie ogen\nzullen ontdekken? Het kost slechts <r<10\nrupees>>.\n[1]Ja, graag![2-]Nee, bedankt.")
/*< 14>*/ 			switch (choice(2)) {
          			  case 0:
/*< 29>*/ 				switch (has_rupees(10)) {
          				  case 0:
/*< 30>*/ 					rupees += -10;
          					flw_160:
/*<160>*/ 					switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          					  case 0:
/*<141>*/ 						printf("Waar zoek je informatie over? Wat is het\ndat je wilt weten?\n[1]Volgende doel?[2]Schatten!")
/*<174>*/ 						scene_flags[0 'Skyloft'][86 /* 0xB 40 */] = true;
/*< 27>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 142, 'param3': 12}
/*<142>*/ 						switch (choice(2)) {
          						  case 0:
/*< 20>*/ 							printf("Schitterend! Kom dichterbij, dan richt ik\nmijn blik... op de toekomst!")
          							flw_38:
/*< 38>*/ 							{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2560, 'next': 164, 'param3': 13}
/*<164>*/ 							{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 50, 'next': 39, 'param3': 54}
/*< 39>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 160, 'next': 40, 'param3': 6}
/*< 40>*/ 							{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -238, 'next': 165, 'param3': 13}
/*<165>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 50, 'next': 17, 'param3': 54}
/*< 17>*/ 							zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 21>*/ 							printf("Ahaaaaaaaaaa. Ik zie heel veel dingen...\nAlles wordt voor mij onthuld...")
          							goto flw_74
          						  case 1:
/*<145>*/ 							entrypoint_111_06();
          						}
          					  case 1:
/*<161>*/ 						printf("Prima, prima... Ik zal kijken wat ik kan\nzien! Jaaaa... Je toekomst... begint helder\nvoor me te worden...")
/*<163>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 38, 'param3': 12}
          						goto flw_38
          					}
          				  case 1:
/*< 32>*/ 					printf("\x0E\x01\x09\x04\x09\x909Maar wat is dat, knul? Ik heb zojuist een\nvisioen gehad dat me vertelde dat je geen\ngeld hebt om me voor mijn fantastische\nwerk te betalen!\nJe verwacht toch zeker niet dat ik mijn\nonpeilbare, alziende ogen gratis gebruik\nom je toekomst te voorspellen?")
          				}
          			  case 1:
/*< 15>*/ 				printf("\x0E\x01\x09\x04\x09\x909Oké, oké. Ik weet dat er de tijd zal komen\ndat je wenst dat deze ronde, geweldige\nogen je toekomst hadden gezien. Maar\ndan is het te laat!")
          			}
          		}
          	  case 1:
/*<173>*/ 		scene_flags[0 'Skyloft'][26 /* 0x2 04 */] = true;
/*< 24>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 1, 'param3': 12}
/*<  1>*/ 		printf("\x0E\x01\x09\x04\x00\x03Kijk diep in mijn ogen... Staar diep in\nmijn ogen... Deze ogen zien veel en hebben\nveel gezien. Deze fraaie, ronde ogen zien\nzelfs... de toekomst!\nLaat me je je toekomst vertellen, knul!\nTwijfel je aan deze ogen? Ik kijk naar je\nshirt, knul, en zie een losse draad aan je\nrechtermouw!\nDeze ogen zien alles! Normaal gesproken\nvraag ik 10 rupees voor een voorspelling,\nmaar deze keer vraag ik slechts <r<1 rupee>>.\n\nDus wil je dat ik je toekomst voorspel?\nDurf je te ontdekken welk lot deze ogen\nvoor je zien? Voor <r<1 rupee>>!\n[1]Oké.[2-]Nee.")
/*<  4>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_25:
/*< 25>*/ 			switch (has_rupees(1)) {
          			  case 0:
/*< 26>*/ 				rupees += -1;
/*<  8>*/ 				printf("\x0E\x01\x09\x04\x00\nUiteraard wist ik dat al. Maar wat een\ntraktatie. Ik heb al tijden geen klant meer\ngehad!\n\nO\x0E\x01\x06\x02\xFDCD...\x0E\x01\x06\x02Í Begrijp me niet verkeerd, ik ben de\nbeste waarzegger die er is. Vertrouw deze\nglinsterende ogen maar.")
          				goto flw_160
          			  case 1:
/*< 28>*/ 				printf("\x0E\x01\x09\x04\x09\x909Maar wat zie ik nou?! Je hebt geen enkele\nrupee in die platte buidel van je. Deze\naanlokkelijke ogen doen niet gratis hun\nwerk!")
          			}
          		  case 1:
/*<  5>*/ 			printf("\x0E\x01\x09\x04\x00\x07Je kwetst mijn gevoelens! Reageer je zo\nop een vriendelijk en voordelig aanbod?\n\n\nVertrouw je deze grote, alziende ogen\nniet? De volgende keer ben ik misschien\nniet zo vriendelijk. Wil je echt niet dat ik\nje toekomst voorspel?[1]Eigenlijk...[2-]Nee, bedankt.")
/*<  6>*/ 			switch (choice(2)) {
          			  case 0:
          				goto flw_25
          			  case 1:
/*<  7>*/ 				printf("Je bent koppig... maar dat had ik al aan je\ngezicht gezien. Ik zie ook aan je gezicht\ndat je niet in toekomstvoorspellingen\ngelooft.\nKennis van je toekomst komt van pas\ntijdens je reizen... Ben je niet nieuwsgierig\nwat deze grote, lieftallige ogen zullen\nzien?[1]Oké, oké.[2-]Niet echt, nee.")
/*<  9>*/ 				switch (choice(2)) {
          				  case 0:
          					goto flw_25
          				  case 1:
/*< 10>*/ 					printf("\x0E\x01\x09\x04\x09\x909Hm... Nu ik in je ogen staar, zie ik dat je\neen ongelovige bent. Kom later niet naar\nme toe om me om hulp te vragen...\n\x0E\x01\x08\x02\xFECDPffft! Het lef!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_111_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf("\x0E\x01\x09\x04\x00\x02Wat is dat? Wat zien mijn ogen?!\n\n\n\nO, knul, ik heb desastreuze visioenen...\n\n\n\nGeloof me of niet, maar mijn ogen zien\ndat je een gevaarlijke, netelige weg moet\nafleggen...\n\nMaar ik kan voorzien welke gevaren op je\npad zullen komen!\n\n\nGeloof mijn\x0E\x01\x06\x02\xFCCD <r<doordringende ogen>>...\x0E\x01\x06\x02Í\nLuister naar mijn onschuldige stem.\n\n\nIk zal je geen kwaad doen. Kijk dieper in\nmijn ogen en kom dichterbij!")
          }

          void entrypoint_111_03() {
/*< 48>*/ 	start()
          	goto flw_160
          }

          void entrypoint_111_04() {
/*< 53>*/ 	start()
          	goto flw_19
          }

          void entrypoint_111_05() {
/*< 82>*/ 	start()
/*<130>*/ 	switch (story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */]) {
          	  case 0:
/*<131>*/ 		printf("En als je ook op zoek bent naar een\nbepaalde <r<plant>>, ik heb ook een groot,\ngroen <r<bos>> gezien. \x0E\x01\x06\x02\xFBCDHm... Waar zou dat\nzijn...")
          		flw_132:
/*<132>*/ 		switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          		  case 0:
/*<133>*/ 			printf("Maar je bent ook op zoek naar iemand\ndie een veld voor je kan omploegen,\nof niet?\n\nHier op Skyloft zul je niemand vinden.\nGa naar de <r<grotten >>waar zij wonen\n<r<die goed kunnen graven>>!\n\nDaar vind je wel een geschikte persoon\nvoor dit karweitje. Ik heb het gezien!")
          			flw_134:
/*<134>*/ 			switch (story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */]) {
          			  case 0:
/*<135>*/ 				printf("Ja, ja! Ik ziet het! Je bent op zoek naar\niets dat vermist is. Een glanzend,\nwervelend iets...\n\nIk zie <r<een droge plek met zand>>! Je\nvindt het daar, op een plek die zelf\nniet makkelijk te vinden is. Deze\ngrote, glanzende ogen liegen niet!")
          				flw_170:
/*<170>*/ 				switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          				  case 0:
/*<171>*/ 					switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          					  case 0:
          						flw_33:
/*< 33>*/ 						printf("\x0E\x01\x09\x04\x00\x12Dat is alles dat ik nu kan zien... Mijn ogen\nzijn nu moe. Kom nog eens terug als je\nbehoefte hebt aan een gids op je weg naar\nde toekomst.")
/*< 41>*/ 						printf("\x0E\x01\x05\x04\x1E\x00\x0E\x01\x09\x04\x0B\xB0DVeel succes, knul!")
/*< 11>*/ 						story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */] = true;
          					  case 1:
/*<172>*/ 						printf("O! De mist vervaagt... Ik zie ook\niemand die een zeldzaam insect is\nverloren...\n\nMijn kristallen bol zegt me dat dit\ninsect in het geheim op een eiland\nwordt vastgehouden door <r<iemand\ndie dol is op insecten>>!")
          						goto flw_33
          					}
          				  case 1:
          					goto flw_33
          				}
          			  case 1:
          				goto flw_170
          			}
          		  case 1:
          			goto flw_134
          		}
          	  case 1:
          		goto flw_132
          	}
          }

          void entrypoint_111_06() {
/*<143>*/ 	start()
/*<144>*/ 	printf("Jaaaa.... Schatten? Je wilt dat ik in mijn\nkristallen bol kijk of ik schatten zie. Ik\nmoet toegeven dat ik weinig over schatten\nweet...\nAch, maar ik kan het wel proberen.")
/*<147>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2560, 'next': 166, 'param3': 13}
/*<166>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 50, 'next': 148, 'param3': 54}
/*<148>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 160, 'next': 149, 'param3': 6}
/*<149>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -238, 'next': 167, 'param3': 13}
/*<167>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 50, 'next': 146, 'param3': 54}
/*<146>*/ 	printf("Ahaaaaaaaaaa. Ik zie heel veel dingen...\nAlles wordt voor mij onthuld...")
/*<156>*/ 	printf("Jaaaa.... Een torenhoog bos... Zanderige\nduinen... Een vurige berg... Monsters...\nZij leveren de schatten die ik voorzie.\n\nOver welke schat wil je meer horen?\n[1]Bos.[2]Duinen.[3]Berg.[4]Monsters.")
/*<150>*/ 	switch (choice(4)) {
          	  case 0:
/*<151>*/ 		printf("Jaaaa... Ik zie een torenhoog bos...\nSchatten die hier vaak gevonden worden,\nzijn <y<vogelveren>> en <y<hoornaarlarven>>...\n\nIk zie je een<y< vogelveer>> vinden door een\nkleine vogel te vangen met je net!\n\n\nEn <y<hoornaarlarven>>... Jaaa... Die vind je\ndoor nesten op de grond te laten vallen!\n\n\nOnder de vogelveren bevindt zich één hele\nbijzondere. Jaaa... De <r<blauwe vogelveer>>...\nHij schijnt geluk te brengen!\n\nAls je er eentje ziet, knul, heb je mazzel!")
          		flw_155:
/*<155>*/ 		printf("En dan zijn er nog <y<barnstenen amuletten>>\nen de <y<droomamuletten>>. Deze vind je in\nelke regio...\n\nOm een of andere reden vind je de\n<y<droomamuletten >>enkel tijdens een of\nandere beproeving...\n\nEn mijn ogen zien dat de <y<barnstenen\namuletten >>zeldzame schatten zijn! Je\nmoet werkelijk heel veel geluk hebben\nom er daar een van te bemachtigen!")
/*<157>*/ 		printf("\x0E\x01\x09\x04\x00\x12Dat is alles dat ik nu kan zien... Mijn ogen\nzijn nu moe. Kom nog eens terug als je\nbehoefte hebt aan een gids op je weg naar\nde toekomst.")
/*<158>*/ 		printf("\x0E\x01\x05\x04\x1E\x00\x0E\x01\x09\x04\x0B\xB0DVeel succes, knul!")
/*<159>*/ 		story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */] = true;
          	  case 1:
/*<152>*/ 		printf("Het land vol zand... In het land vol zand\nzie ik je <y<tuimelkruid >>vinden... Jaaa... en\niets dat een <y<oerbloem>> heet.\n\nOm <y<tuimelkruid>> te vinden zie ik je met\neen net zwaaien als het kruid je pad\nkruist.\n\nZoals de naam al zegt, kun je een\n<y<oerbloem>> alleen vinden door naar het\nverleden te gaan.")
          		goto flw_155
          	  case 2:
/*<153>*/ 		printf("Vonken en vlammen... Jaaa.... Ik zie een\nvurige berg! Daar vind je...\n\n\n...<y<Lizalfos-staarten >>en iets dat <y<Eldin-erts\n>>heet! Jaaaa, ik zie het voor me...\n\n\n<y<Eldin-erts >>kan soms gevonden worden\ndoor in de grond te graven, jaaa... Ik zie\nje graven in mijn visioen...\n\n<y<Lizalfos-staarten>>... Ik zie je deze schatten\nvinden door afgrijselijke monsters te\nverslaan die op hagedissen lijken.")
          		goto flw_155
          	  case 3:
/*<154>*/ 		printf("Monsters. Ik zie monsters... Als je\nmonsters verslaat, kun je deze schatten\nkrijgen...\n\nEen <y<monsterklauw>>, <y<schedelsieraad>>,\n<y<monstergelei>> of <y<monsterhoorn>>...\n\n\n<y<Monsterklauwen >>krijg je van monsters\ndie in de lucht fladderen!\n\n\n<y<Schedelsieraden>> krijg je van mensachtige\nmonsters. Ze zien er afgrijselijk uit!\n\n\n<y<Monstergelei >>krijg je van glibberig\nuitziende monsters.")
/*<207>*/ 		printf("En <y<monsterhoorn >>krijg je van de monsters\nvan wie ze zijn. Je komt eraan door ze\nmet een of ander gereedschap te grijpen.\n\n<y<Kwaadaardige kristallen>> krijg je vaak van\nmonsters die magie gebruiken. Duistere\nmagie.... Ik krijg er de rillingen van...\n\nEn als je erg veel geluk hebt... krijg je een\n<y<gouden schedelsieraad>> in plaats van een\nschedelsieraad.")
          		goto flw_155
          	}
          }

          void entrypoint_111_07() {
/*<168>*/ 	start()
/*<169>*/ 	printf("\x0E\x01\x09\x04\x00\x02O nee... Eh, een momentje...\n\n\n\nJe ziet er goed uit! Als ik niet beter wist,\ndacht ik dat je tijd hebt gehad om allerlei\nschatten te verzamelen.\n\nKom! Kom dichterbij! Als je schatten\nzoekt, kan ik mijn mystieke visioenen\ngebruiken om antwoorden voor je te\nvinden.")
          }

          void entrypoint_111_11() {
/*< 42>*/ 	start()
/*< 52>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*< 54>*/ 		entrypoint_111_04();
          	  case 1:
/*< 43>*/ 		switch (story_flags[374 /* us: 805A9B02 0x10, jp: 805ACD82 0x10 */]) {
          		  case 0:
/*< 46>*/ 			printf("\x0E\x01\x09\x04\x00\nJaaaa! Knul, je bent er! Welkom! Ik zat\nal op je te wachten!\n\n\nEn jij hebt die grijns op je gezicht, jaaa...\nDe grijns die zegt dat je van mij wilt\nweten wat de toekomst je zal brengen!")
          			flw_140:
/*<140>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 47, 'param3': 12}
/*< 47>*/ 			printf("Kom op! Laat me in je toekomst kijken\nmet deze grote, ronde ogen! Je krijgt\nmaar liefst 50% korting!\n\nMag ik een blik in je toekomst werpen?\nDat kost <r+<5 rupees>>. Mooie prijs, toch?\n[1]Ja![2-]Nee, bedankt.")
/*< 50>*/ 			switch (choice(2)) {
          			  case 0:
/*<197>*/ 				check_item_flag(501, 5)
/*<196>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 100}) {
          				  case 0:
/*<139>*/ 					rupees += -5;
/*< 49>*/ 					entrypoint_111_03();
          				  case 1:
/*< 55>*/ 					printf("\x0E\x01\x09\x04\x09\x909Maar wat is dat, knul?! Ik zie dat je niet\ngenoeg rupees op zak hebt!\n\n\nKijk in deze ijskoude, resolute ogen en je\nziet dat geen enkele smeekbede me ertoe\nzal verleiden om mijn prijs te laten\nzakken. Kom terug met meer rupees!")
          				}
          			  case 1:
/*< 51>*/ 				printf("\x0E\x01\x09\x04\x09\x909Oké, oké. Ik weet dat er de tijd zal komen\ndat je wenst dat deze ronde, geweldige\nogen je toekomst hadden gezien. Maar\ndan is het te laat!")
          			}
          		  case 1:
/*< 44>*/ 			printf("\x0E\x01\x09\x04\x00\nHé, jij bent die knul van eerder!\n\n\n\nDankzij jou kan ik weer in de toekomst\nkijken om het lot van mensen te\nvoorspellen!\n\nZal ik ook de jouwe voorspellen? Ik heb\neen mooie deal voor je... Vanaf nu krijg je\n50% korting van mij!")
/*< 45>*/ 			story_flags[374 /* us: 805A9B02 0x10, jp: 805ACD82 0x10 */] = true;
          			goto flw_140
          		}
          	}
          }

          void entrypoint_111_30() {
/*< 80>*/ 	start()
/*<106>*/ 	switch (story_flags[375 /* us: 805A9B02 0x20, jp: 805ACD82 0x20 */]) {
          	  case 0:
/*<107>*/ 		printf("\x0E\x01\x09\x04\x01\x703Jaaaa, dankzij jou, knul, loopt mijn leven\nover van geluk!\n\n\nIk heb nog geen visioen gehad over hoe\nje leven zal verlopen, maar als je nieuws-\ngierig bent, kom dan overdag naar de\nbazaar!")
          	  case 1:
/*< 81>*/ 		printf("\x0E\x01\x09\x04\x01\x701Hé! Wat doe je hier op zo'n gekke tijd? Ik\nben 's nachts niet open. Kom maar op een\nnormale tijd naar mijn stalletje in de\nbazaar!")
          	}
          }

