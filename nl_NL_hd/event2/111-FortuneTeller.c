          void entrypoint_111_01() {
          	start()
/*< 12>*/ 	switch (story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */]) {
          	  case 0:
/*< 18>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
          			flw_19:
/*< 19>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "Wat? Maar ik heb je net je voorspelling\nverteld. Ik heb alles tot in het kleinste\ndetail beschreven. Heb je dat niet\ngehoord?!\nOké... Ik vertel 'm je nog één keer, dus\nzorg ervoor dat je deze keer wel oplet!\nEn denk maar niet dat ik het niet zie als\nje dat niet doet.")
/*<162>*/ 			zone_temp_flags[3 /* 0x1 08 */] = false;
          			flw_74:
/*< 74>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*< 76>*/ 				printf(/* textboxtype: 0, unk: 0, line: 53 */ "Jongeman, wat heb je gedaan?\n\n\n\nAls mijn ogen me niet bedriegen, ben\njij verantwoordelijk voor de verdwijning\nvan het eiland van de godin. Jaaa...\nIk zie werkelijk alles.\nMaar maak je geen zorgen. Ik zie dat\nje het eiland niet zomaar voor de lol\nhebt laten verdwijnen.\n\nHelaas moet je vanaf nu zelf je pad\nzien te vinden. Heb vertrouwen in\njezelf!")
          				flw_127:
/*<127>*/ 				entrypoint_111_05();
          			  case 1:
/*<137>*/ 				switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          				  case 0:
/*<138>*/ 					printf(/* textboxtype: 0, unk: 0, line: 59 */ "O jaaaa... Volgens mijn visioen vind je\nwat je zoekt op het eiland van de godin.\n\n\nMaar deze grote, geweldige ogen zien\nook veel gevaar. Je pad wordt niet licht.\nBereid jezelf goed voor!")
          					goto flw_127
          				  case 1:
/*< 73>*/ 					switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          					  case 0:
/*<136>*/ 						printf(/* textboxtype: 0, unk: 1, line: 58 */ "Ik zie dat je eindelijk de laatste\nbeproeving hebt voltooid. O, jaaa...\nIk zie alles!\n\nIk zie waar je op uit bent. Je wilt\nweten wat je kunt doen met het\nvoorwerp dat je door de beproeving\nhebt gekregen, of niet?\nErgens op Skyloft staat een <color red<beeld van\neen vreemde vogel >coloroff>met <color red<edelstenen als\nogen>coloroff>, al is een van die stenen momenteel\nweg.\nJe hebt het beeld vast al eens gezien...\nAls je je nieuwe voorwerp in de oogkas\nstopt, wordt je pad onthuld! Jaaaa... Ik\nzie het voor me...")
          						goto flw_127
          					  case 1:
/*< 72>*/ 						switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          						  case 0:
/*<129>*/ 							printf(/* textboxtype: 1, unk: 0, line: 57 */ "Je gebruikt het lied dat je van de grote\nzwemmer boven de wolken hebt\nbemachtigd, om de<color red< locatie van de\nvolgende beproeving >coloroff>te vinden.\nMijn visioen toont me dat deze beproeving\n<color red<ergens hier op Skyloft>coloroff> op je wacht.\nWat vreemd! Ik heb geen idee wat\ndat betekent!")
          							goto flw_127
          						  case 1:
/*<199>*/ 							switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          							  case 0:
/*<198>*/ 								switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          								  case 0:
/*<200>*/ 									switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          									  case 0:
/*<201>*/ 										printf(/* textboxtype: 0, unk: 0, line: 56 */ "O, daar is het! Jaaaa, ik zie dat je drie\ndelen van het lied gevonden hebt en het\nvierde deel... wordt bewaakt door iemand\ndie heel, heel groot is.\nSchiet op, want zodra je dit gigantische\nwezen hebt gevonden, is je lied compleet.\nIk heb het in je toekomst gezien!")
          										goto flw_127
          									  case 1:
          										flw_71:
/*< 71>*/ 										switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          										  case 0:
/*< 77>*/ 											check_item_flag(497, 1)
/*< 78>*/ 											switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 52}) {
          											  case 0:
/*< 79>*/ 												printf(/* textboxtype: 0, unk: 1, line: 37 */ "Ik zie de taak die je moet voltooien,\njongeman... O ja, ik zie alles...\n\n\nJe zoekt een plek om wortels te planten?\nMaar dit zijn de wortels van een\nbijzondere boom, nietwaar? Waar kan\ndeze boom goed groeien?\n<0x10006:0xfccd>Ik zie...<0x10006:0x00cd> een tempel! Een tempel waar\neen oude vrouw nu woont. Ja, daar vind\nje de perfecte plek.")
          												flw_88:
/*< 88>*/ 												entrypoint_111_05();
          											  case 1:
/*< 75>*/ 												printf(/* textboxtype: 0, unk: 1, line: 55 */ "Jongeman, je zoekt een lied dat in\nvier delen is opgedeeld, nietwaar?\nJa, jaaa... Ik zie alles.\n\nDan moet je een... twee...<pause 10> drie regio's\nbezoeken! Je mag zelf weten in welke\nvolgorde je dat doet!\n\nIn andere woorden: kies zelf waar je\npad naartoe leidt. Je vindt ongetwijfeld\niets interessants.")
          												goto flw_88
          											}
          										  case 1:
/*< 70>*/ 											switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          											  case 0:
/*<128>*/ 												printf(/* textboxtype: 1, unk: 0, line: 54 */ "Je hebt eindelijk de persoon gevonden\nwaar je naar op zoek was! Wat een\ngeweldig nieuws.\n\nMaar je bent nog niet klaar! Je moet\nnog praten met de grote reus die\nboven de wolken zwemt.\n\nAls je meer wilt weten, moet je met\nde <color red<rector van de ridderacademie\n>coloroff>spreken.")
          												flw_126:
/*<126>*/ 												entrypoint_111_05();
          											  case 1:
/*< 66>*/ 												switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          												  case 0:
/*< 69>*/ 													printf(/* textboxtype: 0, unk: 1, line: 52 */ "Oei... Ik zie de schaduw van een\ngigantisch monster...\n\n\nKnul, hoe vaak ik ook in je toekomst\nkijk, ik word telkens weer verrast.\n\n\nO, sorry. Je toekomst is natuurlijk\ngeen vermaak voor mij, al vermaakt\nhij mij. Maar als je genoeg <color red<drankjes\n>coloroff>meeneemt, komt het goed!")
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
/*<180>*/ 																	printf(/* textboxtype: 1, unk: 0, line: 51 */ "Aha! Door mijn alziende ogen is je\ntoekomst volledig helder voor mij,\njongeman.\n\nZoals altijd is het ongelofelijk warm\nin de in vlammen gehulde berg. Het zou\nheel slim zijn om een <color red<ijzeren schild >coloroff>mee\nte nemen!")
          																	flw_186:
/*<186>*/ 																	entrypoint_111_05();
          																  case 1:
/*<188>*/ 																	switch (story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */]) {
          																	  case 0:
/*<187>*/ 																		printf(/* textboxtype: 0, unk: 0, line: 50 */ "Ik zie je toekomst, jaaa... Ik zie je bij een\nvurige berg, met een vat vol water.\n\n\nEn.. O, ja! Als je dit water niet bezorgt,\nkan dit problemen opleveren voor iemand\nanders!")
          																		goto flw_186
          																	  case 1:
/*< 93>*/ 																		printf(/* textboxtype: 0, unk: 1, line: 49 */ "Water, geen water... maar je hebt water\nnodig! Wat een hitte! Het ziet er niet\ngoed uit.\n\nMaar, jongeman, je hebt al het watervat\nontdekt dat je nodig hebt om het water te\nvervoeren.\n\nJa, ja... Ik begrijp het nu. Vergeet niet...\ndeze ogen zien ALLES! Ga naar het woud,\nwant daar vind je wat je zoekt.")
/*< 94>*/ 																		switch (story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */]) {
          																		  case 0:
          																			goto flw_186
          																		  case 1:
/*<123>*/ 																			{'type': 'type3', 'subType': 1, 'param1': 90, 'param2': 0, 'next': 178, 'param3': 51}
/*<178>*/ 																			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 95, 'param3': 16}
/*< 95>*/ 																			printf(/* textboxtype: 0, unk: 0, line: 65 */ "Ik acht het 60% zeker dat het object dat u\nzoekt, zich in het woud bevindt. Ik raad u\naan om hier te zoeken.\n\n<sound 4>Wilt u dat ik uw <color red<detectiefunctie >coloroff>kalibreer\nom naar het <color red<bad>coloroff> te zoeken?\n[1-]Ja![2]Nee, bedankt.")
/*< 97>*/ 																			switch (choice(2)) {
          																			  case 0:
/*< 99>*/ 																				story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = true;
/*<100>*/ 																				story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<101>*/ 																				story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<102>*/ 																				story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<103>*/ 																				story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<104>*/ 																				story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<189>*/ 																				open_dowsing_wheel(13)
/*< 96>*/ 																				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10012:0x00000005>Ja, meester. Met uw <color red<detectiefunctie>coloroff> kunt u nu ook het\n<color red<bad>coloroff> detecteren. Ik stel voor dat u zo snel mogelijk op\nzoek gaat.")
/*<190>*/ 																				story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          																				flw_105:
/*<105>*/ 																				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 125, 'param3': 36}
/*<125>*/ 																				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 124, 'param3': 16}
/*<124>*/ 																				entrypoint_111_05();
          																			  case 1:
/*< 98>*/ 																				printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10012:0x00000005>Ja, meester. Ik heb uw verzoek om de\ndetectiefunctie in te stellen, geannuleerd.\nAls u hierover van gedachten verandert,\nspreek dan opnieuw met dit wezen.")
          																				goto flw_105
          																			}
          																		}
          																	}
          																}
          															  case 1:
/*< 91>*/ 																printf(/* textboxtype: 1, unk: 0, line: 48 */ "O, ik zie dat je de vuurbeproeving met\ngemak hebt doorstaan. Maar je bent er\nnog niet. O jee, ik zie waterproblemen!\n\nJaaa... Gebrek aan water levert veel\nproblemen op. Als dit gebeurt, kom me\ndan nog eens bezoeken.")
          																flw_89:
/*< 89>*/ 																entrypoint_111_05();
          															}
          														  case 1:
/*< 68>*/ 															printf(/* textboxtype: 0, unk: 0, line: 47 */ "Jeetje! Hoeveel van deze beproevingen\nmoet je ondergaan voor je tevreden\nbent?!\n\nDeze keer zie ik... vuur! Je vindt <color red<de\ntoegang tot een beproeving>coloroff> onder een\nvurige berg!\n\nNatuurlijk neem je geen <color red<houten schild\n>coloroff>mee, dat zou dwaas zijn!")
          															goto flw_89
          														}
          													  case 1:
/*< 65>*/ 														switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          														  case 0:
/*<184>*/ 															printf(/* textboxtype: 0, unk: 0, line: 44 */ "Mijn grote, kristalheldere ogen zien het\npad dat je gaat betreden! Je moet een\n<color red<lied >coloroff>leren op een heilige plaats!\n\nMaar wat is dat? Mijn visioen toont me\ndat het een plaats is waar je al eerder\nbent geweest. Een heilige plaats omgeven\ndoor wolken...")
          															flw_185:
/*<185>*/ 															entrypoint_111_05();
          														  case 1:
/*<181>*/ 															switch (story_flags[72 /* us: 805A9AE9 0x20, jp: 805ACD69 0x20 */]) {
          															  case 0:
/*<205>*/ 																switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          																  case 0:
/*<206>*/ 																	printf(/* textboxtype: 0, unk: 1, line: 46 */ "Oho! Zo te zien heb je een beproeving op\neen zanderige plek voltooid. Maar je bent\ner nog niet. Ik zie nog meer in je\ntoekomst!\nHm... Je moet naar een plek gaan met\nNOG meer zand. Maar ik zie ook een\n<color red<zandoppervlakte>coloroff>... <pause 20>En een <color red<schip>coloroff>!<pause 20> Wat een\nverwarrend visioen...\nNou ja, je moet eerst opnieuw naar een\nzanderige plek gaan!")
          																	goto flw_185
          																  case 1:
/*< 67>*/ 																	printf(/* textboxtype: 1, unk: 0, line: 45 */ "Wat kun je verwachten? Ik zal eens\nvoor je kijken... Je vindt <color red<de toegang tot\neen beproeving >coloroff>verborgen in een\nzanderige plaats!\nMeer zie ik niet in mijn visioen. Deze\nogen; ze zien veel. Je volgende\nbestemming is een plek overspoeld\nmet zand.")
          																	goto flw_185
          																}
          															  case 1:
/*< 64>*/ 																switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          																  case 0:
/*<182>*/ 																	printf(/* textboxtype: 0, unk: 0, line: 44 */ "Mijn grote, kristalheldere ogen zien het\npad dat je gaat betreden! Je moet een\n<color red<lied >coloroff>leren op een heilige plaats!\n\nMaar wat is dat? Mijn visioen toont me\ndat het een plaats is waar je al eerder\nbent geweest. Een heilige plaats omgeven\ndoor wolken...")
          																	flw_87:
/*< 87>*/ 																	entrypoint_111_05();
          																  case 1:
/*< 62>*/ 																	switch (story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */]) {
          																	  case 0:
/*<203>*/ 																		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          																		  case 0:
/*<204>*/ 																			printf(/* textboxtype: 0, unk: 1, line: 43 */ "O! Ik zie dat je de beproeving in het\nwoud hebt voltooid. Jaaa... Voor deze\nogen kun je niks verbergen!\n\nMijn visioen toont me een<color red< grote boom\n>coloroff>midden in het woud. Daar vind je een\nbelangrijk individu.\n\nEn een groot stenen beeld...<pause 20> Jaaa...\nOnder de grond...<pause 20> Omhoog, omlaag...\nIk zie veel activiteit in je toekomst.\n\nMaar zorg eerst dat je op de plek met de\nvele bomen komt!")
          																			goto flw_87
          																		  case 1:
/*< 63>*/ 																			printf(/* textboxtype: 1, unk: 0, line: 42 */ "Jongeman, ik zie het pad dat voor je ligt.\nJe zult een beproeving onder ogen zien!\nJaaa... Diep in de schaduwen. Een\nangstaanjagende beproeving...\nGa het woud in! Daar vind je de\nbeproeving...")
          																			goto flw_87
          																		}
          																	  case 1:
/*< 60>*/ 																		switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          																		  case 0:
/*< 61>*/ 																			printf(/* textboxtype: 0, unk: 0, line: 41 */ "Twee wervelende zeilen kijken uit op een\ntoren. Op die toren speel je een deuntje\nen... ik zie licht! Een prachtig licht!\n\nHet licht toont het pad dat je moet\nvolgen!")
/*<202>*/ 																			entrypoint_111_05();
          																		  case 1:
/*<175>*/ 																			switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          																			  case 0:
/*< 57>*/ 																				switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          																				  case 0:
/*< 58>*/ 																					printf(/* textboxtype: 0, unk: 0, line: 38 */ "Jaaaa... Je bent naar iets op zoek. Ik zal\nin je toekomst kijken...\n\n\nIk zie... een propeller die door een zee\nvan wolken valt... Eenzaam, versleten,\naan de elementen overgelaten...\n\nJaaa... Ik zie een <color red<in vlammen gehulde\nberg>coloroff>... Ik zie een tempel op deze berg!\nWat je zoekt, bevindt zich <color red<op de berg,\nlager dan deze tempel>coloroff>...\nEen in vlammen gehulde berg... Zou zoiets\necht bestaan?")
/*<120>*/ 																					switch (story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */]) {
          																					  case 0:
/*<121>*/ 																						entrypoint_111_05();
          																					  case 1:
/*<111>*/ 																						{'type': 'type3', 'subType': 1, 'param1': 90, 'param2': 0, 'next': 177, 'param3': 51}
/*<177>*/ 																						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 108, 'param3': 16}
/*<108>*/ 																						printf(/* textboxtype: 0, unk: 0, line: 68 */ "")
/*<109>*/ 																						switch (choice(2)) {
          																						  case 0:
/*<112>*/ 																							story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<113>*/ 																							story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<114>*/ 																							story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<115>*/ 																							story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<116>*/ 																							story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<117>*/ 																							story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<191>*/ 																							open_dowsing_wheel(13)
/*<193>*/ 																							printf(/* textboxtype: 1, unk: 0, line: 69 */ "")
/*<192>*/ 																							story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          																							flw_118:
/*<118>*/ 																							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 122, 'param3': 36}
/*<122>*/ 																							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 119, 'param3': 16}
/*<119>*/ 																							entrypoint_111_05();
          																						  case 1:
/*<110>*/ 																							printf(/* textboxtype: 0, unk: 1, line: 70 */ "")
          																							goto flw_118
          																						}
          																					}
          																				  case 1:
/*<194>*/ 																					switch (story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */]) {
          																					  case 0:
/*<195>*/ 																						printf(/* textboxtype: 0, unk: 1, line: 40 */ "Eens even kijken... Je zoekt iets om een\ngebroken object mee te repareren. Jaaa...\n\n\nIk zie een <color yellow<oerbloem>coloroff><0x10006:0xfbcd>...<0x10006:0x00cd>\n\n\n\nIn mijn visioen zie ik oerbloemen bloeien\nin lang vervlogen tijden, waar nu enkel\n<color red<zand >coloroff>te vinden is.<pause 20> Als je in het zand zoekt,\nvind je er een!")
          																						flw_86:
/*< 86>*/ 																						entrypoint_111_05();
          																					  case 1:
/*< 59>*/ 																						printf(/* textboxtype: 1, unk: 0, line: 39 */ "Jaaa... Ik zie bouwwerken met grote,\nwervelende zeilen. Iets creëert een\nwindvlaag en de bouwwerken...\ndraaien!\nDe twee bouwwerken kijken uit op...\neen toren!")
          																						goto flw_86
          																					}
          																				}
          																			  case 1:
/*< 56>*/ 																				switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          																				  case 0:
/*<176>*/ 																					printf(/* textboxtype: 0, unk: 1, line: 64 */ "Ja... Je hebt een grote hindernis\ngenomen en bent daar natuurlijk blij\nmee.\n\nJe volgende avontuur wordt.. <pause 30>Ooooo!\nDe <color red<Ballade van de Godin>coloroff>... <pause 30> Ik zie dat\nje er meer over wilt weten!\n\nMaar je vraagt je vast af wie je er meer\nover kan vertellen.\n\n\nIn mijn kristallen bol zie ik... de <color red<rector\nvan de ridderacademie>coloroff>! Hij is degene\nmet wie je moet praten, jaaaa...")
          																					flw_85:
/*< 85>*/ 																					entrypoint_111_05();
          																				  case 1:
/*< 36>*/ 																					switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          																					  case 0:
/*< 37>*/ 																						printf(/* textboxtype: 1, unk: 0, line: 36 */ "Op de plek waar je naartoe reist...\n\n\n\nOntwaakt iets groots? Hm?<pause 30> Het is\nreusachtig... <pause 20>Ja, je kunt het niet\nmissen, hoor! <pause 40>Het is kolossaal!\n\nIk zie dat je maar beter wat <color red<genees-\ndrankjes >coloroff>mee kunt nemen. O, jaaaa...\nIk voorspel dat die je enorm zullen\nhelpen.")
          																						goto flw_85
          																					  case 1:
/*< 35>*/ 																						switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          																						  case 0:
/*< 34>*/ 																							printf(/* textboxtype: 0, unk: 0, line: 35 */ "Ik zie een plek met veel... ZAND! Hm,\nzand? Is het een zandbak? Een\ngigantische zandbak?\n\nNou, wat het ook is, het is een verlaten\nplek waar je problemen zult hebben\nmet elektriciteit...\n\nAan ijzer heb je er niet veel. Ik zie dat\neen <color red<houten schild >coloroff>of een sterker schild\nbeter van pas komt...\n\nEn je hebt er mogelijk wat bommen\nnodig. Zorg ervoor dat je verscheidene\n<color red<bommenzakken>coloroff> bij je hebt.")
          																							goto flw_85
          																						  case 1:
/*< 22>*/ 																							switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          																							  case 0:
/*< 23>*/ 																								printf(/* textboxtype: 0, unk: 1, line: 34 */ "Jongeman, mijn ogen zien... Vlammen!\nRook! Hitte! Dat is mijn visioen van je\ntoekomst...\n\nEen houten schild kan je hier niet voor\nbeschutten... IJzer! Je hebt een <color red<ijzeren\nschild >coloroff>nodig om jezelf te beschermen!\n\nEn als je wat <color red<drankjes >coloroff>meeneemt om je\n<color red<energie mee te herstellen>coloroff>, komen die vast\nook goed van pas...")
/*< 84>*/ 																								entrypoint_111_05();
          																							  case 1:
/*< 16>*/ 																								printf(/* textboxtype: 1, unk: 0, line: 33 */ "Jongeman, sta je op het punt om naar\neen dichtbebost gebied te gaan? Ergens\nvol groen? Jaaaa... Mijn ogen zien alles...\n\nBomen! Zoveel bomen!<pause 20> Ja. <pause 10>Overal... Het\nis geen slecht idee om voor je vertrek een\n<color red<houten schild >coloroff>te kopen.\n\nIk zie dat je zelf nog jong en zo groen als\ngras bent, dus het kan ook geen kwaad om\neen <color red<geneesdrankje >coloroff>mee te nemen.")
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
/*< 13>*/ 			printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x00000003>Jij daar! Ja, ik zie je wel! Kom hier, dan\nvoorspel ik je toekomst. Het kost maar\n<color red<10 rupees >coloroff>om licht te werpen op je in\nschaduwen gehulde lot.\nWil je weten wat deze grote, mooie ogen\nzullen ontdekken? Het kost slechts <color red<10\nrupees>coloroff>.\n[1-]Ja, graag![2]Nee, bedankt.")
/*< 14>*/ 			switch (choice(2)) {
          			  case 0:
/*< 29>*/ 				switch (has_rupees(10)) {
          				  case 0:
/*< 30>*/ 					rupees += -10;
          					flw_160:
/*<160>*/ 					switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          					  case 0:
/*<141>*/ 						printf(/* textboxtype: 1, unk: 0, line: 15 */ "Waar zoek je informatie over? Wat is het\ndat je wilt weten?\n[1-]Volgende doel?[2-]Schatten!")
/*<174>*/ 						scene_flags[0 'Skyloft'][86 /* 0xB 40 */] = true;
/*< 27>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 142, 'param3': 12}
/*<142>*/ 						switch (choice(2)) {
          						  case 0:
/*< 20>*/ 							printf(/* textboxtype: 0, unk: 0, line: 5 */ "Schitterend! Kom dichterbij, dan richt ik\nmijn blik... op de toekomst!")
          							flw_38:
/*< 38>*/ 							{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2560, 'next': 164, 'param3': 13}
/*<164>*/ 							{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 50, 'next': 39, 'param3': 54}
/*< 39>*/ 							wait_frames(160)
/*< 40>*/ 							{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -238, 'next': 165, 'param3': 13}
/*<165>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 50, 'next': 17, 'param3': 54}
/*< 17>*/ 							zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 21>*/ 							printf(/* textboxtype: 1, unk: 0, line: 9 */ "Ahaaaaaaaaaa. Ik zie heel veel dingen...\nAlles wordt voor mij onthuld...")
          							goto flw_74
          						  case 1:
/*<145>*/ 							entrypoint_111_06();
          						}
          					  case 1:
/*<161>*/ 						printf(/* textboxtype: 0, unk: 1, line: 16 */ "Prima, prima... Ik zal kijken wat ik kan\nzien! Jaaaa... Je toekomst... begint helder\nvoor me te worden...")
/*<163>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 38, 'param3': 12}
          						goto flw_38
          					}
          				  case 1:
/*< 32>*/ 					printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00090909>Maar wat is dat, knul? Ik heb zojuist een\nvisioen gehad dat me vertelde dat je geen\ngeld hebt om me voor mijn fantastische\nwerk te betalen!\nJe verwacht toch zeker niet dat ik mijn\nonpeilbare, alziende ogen gratis gebruik\nom je toekomst te voorspellen?")
          				}
          			  case 1:
/*< 15>*/ 				printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00090909>Oké, oké. Ik weet dat er de tijd zal komen\ndat je wenst dat deze ronde, geweldige\nogen je toekomst hadden gezien. Maar\ndan is het te laat!")
          			}
          		}
          	  case 1:
/*<173>*/ 		scene_flags[0 'Skyloft'][26 /* 0x2 04 */] = true;
/*< 24>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 1, 'param3': 12}
/*<  1>*/ 		printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000003>Kijk diep in mijn ogen... Staar diep in\nmijn ogen... Deze ogen zien veel en hebben\nveel gezien. Deze fraaie, ronde ogen zien\nzelfs... de toekomst!\nLaat me je je toekomst vertellen, knul!\nTwijfel je aan deze ogen? Ik kijk naar je\nshirt, knul, en zie een losse draad aan je\nrechtermouw!\nDeze ogen zien alles! Normaal gesproken\nvraag ik 10 rupees voor een voorspelling,\nmaar deze keer vraag ik slechts <color red<1 rupee>coloroff>.\n\nDus wil je dat ik je toekomst voorspel?\nDurf je te ontdekken welk lot deze ogen\nvoor je zien? Voor <color red<1 rupee>coloroff>!\n[1-]Oké.[2]Nee.")
/*<  4>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_25:
/*< 25>*/ 			switch (has_rupees(1)) {
          			  case 0:
/*< 26>*/ 				rupees += -1;
/*<  8>*/ 				printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x0000000a>Uiteraard wist ik dat al. Maar wat een\ntraktatie. Ik heb al tijden geen klant meer\ngehad!\n\nO<0x10006:0xfdcd>...<0x10006:0x00cd> Begrijp me niet verkeerd, ik ben de\nbeste waarzegger die er is. Vertrouw deze\nglinsterende ogen maar.")
          				goto flw_160
          			  case 1:
/*< 28>*/ 				printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00090909>Maar wat zie ik nou?! Je hebt geen enkele\nrupee in die platte buidel van je. Deze\naanlokkelijke ogen doen niet gratis hun\nwerk!")
          			}
          		  case 1:
/*<  5>*/ 			printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00000007>Je kwetst mijn gevoelens! Reageer je zo\nop een vriendelijk en voordelig aanbod?\n\n\nVertrouw je deze grote, alziende ogen\nniet? De volgende keer ben ik misschien\nniet zo vriendelijk. Wil je echt niet dat ik\nje toekomst voorspel?[1-]Eigenlijk...[2]Nee, bedankt.")
/*<  6>*/ 			switch (choice(2)) {
          			  case 0:
          				goto flw_25
          			  case 1:
/*<  7>*/ 				printf(/* textboxtype: 0, unk: 0, line: 2 */ "Je bent koppig... maar dat had ik al aan je\ngezicht gezien. Ik zie ook aan je gezicht\ndat je niet in toekomstvoorspellingen\ngelooft.\nKennis van je toekomst komt van pas\ntijdens je reizen... Ben je niet nieuwsgierig\nwat deze grote, lieftallige ogen zullen\nzien?[1-]Oké, oké.[2]Niet echt, nee.")
/*<  9>*/ 				switch (choice(2)) {
          				  case 0:
          					goto flw_25
          				  case 1:
/*< 10>*/ 					printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00090909>Hm... Nu ik in je ogen staar, zie ik dat je\neen ongelovige bent. Kom later niet naar\nme toe om me om hulp te vragen...\n<0x10008:0xfecd>Pffft! Het lef!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_111_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00000002>Wat is dat? Wat zien mijn ogen?!\n\n\n\nO, knul, ik heb desastreuze visioenen...\n\n\n\nGeloof me of niet, maar mijn ogen zien\ndat je een gevaarlijke, netelige weg moet\nafleggen...\n\nMaar ik kan voorzien welke gevaren op je\npad zullen komen!\n\n\nGeloof mijn<0x10006:0xfccd> <color red<doordringende ogen>coloroff>...<0x10006:0x00cd>\nLuister naar mijn onschuldige stem.\n\n\nIk zal je geen kwaad doen. Kijk dieper in\nmijn ogen en kom dichterbij!")
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
/*<131>*/ 		printf(/* textboxtype: 1, unk: 0, line: 60 */ "En als je ook op zoek bent naar een\nbepaalde <color red<plant>coloroff>, ik heb ook een groot,\ngroen <color red<bos>coloroff> gezien. <0x10006:0xfbcd>Hm... Waar zou dat\nzijn...")
          		flw_132:
/*<132>*/ 		switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          		  case 0:
/*<133>*/ 			printf(/* textboxtype: 0, unk: 1, line: 61 */ "Maar je bent ook op zoek naar iemand\ndie een veld voor je kan omploegen,\nof niet?\n\nHier op Skyloft zul je niemand vinden.\nGa naar de <color red<grotten >coloroff>waar zij wonen\n<color red<die goed kunnen graven>coloroff>!\n\nDaar vind je wel een geschikte persoon\nvoor dit karweitje. Ik heb het gezien!")
          			flw_134:
/*<134>*/ 			switch (story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */]) {
          			  case 0:
/*<135>*/ 				printf(/* textboxtype: 0, unk: 0, line: 62 */ "Ja, ja! Ik ziet het! Je bent op zoek naar\niets dat vermist is. Een glanzend,\nwervelend iets...\n\nIk zie <color red<een droge plek met zand>coloroff>! Je\nvindt het daar, op een plek die zelf\nniet makkelijk te vinden is. Deze\ngrote, glanzende ogen liegen niet!")
          				flw_170:
/*<170>*/ 				switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          				  case 0:
/*<171>*/ 					switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          					  case 0:
          						flw_33:
/*< 33>*/ 						printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00000012>Dat is alles dat ik nu kan zien... Mijn ogen\nzijn nu moe. Kom nog eens terug als je\nbehoefte hebt aan een gids op je weg naar\nde toekomst.")
/*< 41>*/ 						printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10005:0x001e0000><0x10009:0x000b0b0d>Veel succes, knul!")
/*< 11>*/ 						story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */] = true;
          					  case 1:
/*<172>*/ 						printf(/* textboxtype: 1, unk: 0, line: 63 */ "O! De mist vervaagt... Ik zie ook\niemand die een zeldzaam insect is\nverloren...\n\nMijn kristallen bol zegt me dat dit\ninsect in het geheim op een eiland\nwordt vastgehouden door <color red<iemand\ndie dol is op insecten>coloroff>!")
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
/*<144>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "Jaaaa.... Schatten? Je wilt dat ik in mijn\nkristallen bol kijk of ik schatten zie. Ik\nmoet toegeven dat ik weinig over schatten\nweet...\nAch, maar ik kan het wel proberen.")
/*<147>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2560, 'next': 166, 'param3': 13}
/*<166>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 50, 'next': 148, 'param3': 54}
/*<148>*/ 	wait_frames(160)
/*<149>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -238, 'next': 167, 'param3': 13}
/*<167>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 50, 'next': 146, 'param3': 54}
/*<146>*/ 	printf(/* textboxtype: 1, unk: 0, line: 9 */ "Ahaaaaaaaaaa. Ik zie heel veel dingen...\nAlles wordt voor mij onthuld...")
/*<156>*/ 	printf(/* textboxtype: 0, unk: 1, line: 19 */ "Jaaaa.... Een torenhoog bos... Zanderige\nduinen... Een vurige berg... Monsters...\nZij leveren de schatten die ik voorzie.\n\nOver welke schat wil je meer horen?\n[1-]Bos.[2-]Duinen.[3-]Berg.[4-]Monsters.")
/*<150>*/ 	switch (choice(4)) {
          	  case 0:
/*<151>*/ 		printf(/* textboxtype: 0, unk: 0, line: 20 */ "Jaaaa... Ik zie een torenhoog bos...\nSchatten die hier vaak gevonden worden,\nzijn <color yellow<vogelveren>coloroff> en <color yellow<hoornaarlarven>coloroff>...\n\nIk zie je een<color yellow< vogelveer>coloroff> vinden door een\nkleine vogel te vangen met je net!\n\n\nEn <color yellow<hoornaarlarven>coloroff>... Jaaa... Die vind je\ndoor nesten op de grond te laten vallen!\n\n\nOnder de vogelveren bevindt zich één hele\nbijzondere. Jaaa... De <color red<blauwe vogelveer>coloroff>...\nHij schijnt geluk te brengen!\n\nAls je er eentje ziet, knul, heb je mazzel!")
          		flw_155:
/*<155>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "En dan zijn er nog <color yellow<barnstenen amuletten>coloroff>\nen de <color yellow<droomamuletten>coloroff>. Deze vind je in\nelke regio...\n\nOm een of andere reden vind je de\n<color yellow<droomamuletten >coloroff>enkel tijdens een of\nandere beproeving...\n\nEn mijn ogen zien dat de <color yellow<barnstenen\namuletten >coloroff>zeldzame schatten zijn! Je\nmoet werkelijk heel veel geluk hebben\nom er daar een van te bemachtigen!")
/*<157>*/ 		printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00000012>Dat is alles dat ik nu kan zien... Mijn ogen\nzijn nu moe. Kom nog eens terug als je\nbehoefte hebt aan een gids op je weg naar\nde toekomst.")
/*<158>*/ 		printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10005:0x001e0000><0x10009:0x000b0b0d>Veel succes, knul!")
/*<159>*/ 		story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */] = true;
          	  case 1:
/*<152>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "Het land vol zand... In het land vol zand\nzie ik je <color yellow<tuimelkruid >coloroff>vinden... Jaaa... en\niets dat een <color yellow<oerbloem>coloroff> heet.\n\nOm <color yellow<tuimelkruid>coloroff> te vinden zie ik je met\neen net zwaaien als het kruid je pad\nkruist.\n\nZoals de naam al zegt, kun je een\n<color yellow<oerbloem>coloroff> alleen vinden door naar het\nverleden te gaan.")
          		goto flw_155
          	  case 2:
/*<153>*/ 		printf(/* textboxtype: 0, unk: 1, line: 22 */ "Vonken en vlammen... Jaaa.... Ik zie een\nvurige berg! Daar vind je...\n\n\n...<color yellow<Lizalfos-staarten >coloroff>en iets dat <color yellow<Eldin-erts\n>coloroff>heet! Jaaaa, ik zie het voor me...\n\n\n<color yellow<Eldin-erts >coloroff>kan soms gevonden worden\ndoor in de grond te graven, jaaa... Ik zie\nje graven in mijn visioen...\n\n<color yellow<Lizalfos-staarten>coloroff>... Ik zie je deze schatten\nvinden door afgrijselijke monsters te\nverslaan die op hagedissen lijken.")
          		goto flw_155
          	  case 3:
/*<154>*/ 		printf(/* textboxtype: 0, unk: 0, line: 23 */ "Monsters. Ik zie monsters... Als je\nmonsters verslaat, kun je deze schatten\nkrijgen...\n\nEen <color yellow<monsterklauw>coloroff>, <color yellow<schedelsieraad>coloroff>,\n<color yellow<monstergelei>coloroff> of <color yellow<monsterhoorn>coloroff>...\n\n\n<color yellow<Monsterklauwen >coloroff>krijg je van monsters\ndie in de lucht fladderen!\n\n\n<color yellow<Schedelsieraden>coloroff> krijg je van mensachtige\nmonsters. Ze zien er afgrijselijk uit!\n\n\n<color yellow<Monstergelei >coloroff>krijg je van glibberig\nuitziende monsters.")
/*<207>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "En <color yellow<monsterhoorn >coloroff>krijg je van de monsters\nvan wie ze zijn. Je komt eraan door ze\nmet een of ander gereedschap te grijpen.\n\n<color yellow<Kwaadaardige kristallen>coloroff> krijg je vaak van\nmonsters die magie gebruiken. Duistere\nmagie.... Ik krijg er de rillingen van...\n\nEn als je erg veel geluk hebt... krijg je een\n<color yellow<gouden schedelsieraad>coloroff> in plaats van een\nschedelsieraad.")
          		goto flw_155
          	}
          }

          void entrypoint_111_07() {
/*<168>*/ 	start()
/*<169>*/ 	printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00000002>O nee... Eh, een momentje...\n\n\n\nJe ziet er goed uit! Als ik niet beter wist,\ndacht ik dat je tijd hebt gehad om allerlei\nschatten te verzamelen.\n\nKom! Kom dichterbij! Als je schatten\nzoekt, kan ik mijn mystieke visioenen\ngebruiken om antwoorden voor je te\nvinden.")
          }

          void entrypoint_111_11() {
/*< 42>*/ 	start()
/*< 52>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*< 54>*/ 		entrypoint_111_04();
          	  case 1:
/*< 43>*/ 		switch (story_flags[374 /* us: 805A9B02 0x10, jp: 805ACD82 0x10 */]) {
          		  case 0:
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0000000a>Jaaaa! Knul, je bent er! Welkom! Ik zat\nal op je te wachten!\n\n\nEn jij hebt die grijns op je gezicht, jaaa...\nDe grijns die zegt dat je van mij wilt\nweten wat de toekomst je zal brengen!")
          			flw_140:
/*<140>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 47, 'param3': 12}
/*< 47>*/ 			printf(/* textboxtype: 0, unk: 1, line: 31 */ "Kom op! Laat me in je toekomst kijken\nmet deze grote, ronde ogen! Je krijgt\nmaar liefst 50% korting!\n\nMag ik een blik in je toekomst werpen?\nDat kost <color red rupee<5 rupees>coloroff>. Mooie prijs, toch?\n[1-]Ja![2]Nee, bedankt.")
/*< 50>*/ 			switch (choice(2)) {
          			  case 0:
/*<197>*/ 				check_item_flag(501, 5)
/*<196>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 100}) {
          				  case 0:
/*<139>*/ 					rupees += -5;
/*< 49>*/ 					entrypoint_111_03();
          				  case 1:
/*< 55>*/ 					printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00090909>Maar wat is dat, knul?! Ik zie dat je niet\ngenoeg rupees op zak hebt!\n\n\nKijk in deze ijskoude, resolute ogen en je\nziet dat geen enkele smeekbede me ertoe\nzal verleiden om mijn prijs te laten\nzakken. Kom terug met meer rupees!")
          				}
          			  case 1:
/*< 51>*/ 				printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00090909>Oké, oké. Ik weet dat er de tijd zal komen\ndat je wenst dat deze ronde, geweldige\nogen je toekomst hadden gezien. Maar\ndan is het te laat!")
          			}
          		  case 1:
/*< 44>*/ 			printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x0000000a>Hé, jij bent die knul van eerder!\n\n\n\nDankzij jou kan ik weer in de toekomst\nkijken om het lot van mensen te\nvoorspellen!\n\nZal ik ook de jouwe voorspellen? Ik heb\neen mooie deal voor je... Vanaf nu krijg je\n50% korting van mij!")
/*< 45>*/ 			story_flags[374 /* us: 805A9B02 0x10, jp: 805ACD82 0x10 */] = true;
          			goto flw_140
          		}
          	}
          }

          void entrypoint_111_30() {
/*< 80>*/ 	start()
/*<106>*/ 	switch (story_flags[375 /* us: 805A9B02 0x20, jp: 805ACD82 0x20 */]) {
          	  case 0:
/*<107>*/ 		printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00010703>Jaaaa, dankzij jou, knul, loopt mijn leven\nover van geluk!\n\n\nIk heb nog geen visioen gehad over hoe\nje leven zal verlopen, maar als je nieuws-\ngierig bent, kom dan overdag naar de\nbazaar!")
          	  case 1:
/*< 81>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00010701>Hé! Wat doe je hier op zo'n gekke tijd? Ik\nben 's nachts niet open. Kom maar op een\nnormale tijd naar mijn stalletje in de\nbazaar!")
          	}
          }

