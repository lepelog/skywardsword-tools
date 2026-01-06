          void entrypoint_006_950() {
/*< 25>*/ 	start()
/*< 26>*/ 	switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          	  case 0:
/*< 27>*/ 		printf(/* textboxtype: 0, unk: 0, line: 77 */ "Daarnaast kunt u met uw <color yellow<grijpklauwen\n>coloroff>klimop vastpakken en u zich er zo vanaf\neen afstand naartoe trekken.")
          	  case 1:
          	}
          }

          void entrypoint_006_916() {
/*< 55>*/ 	start()
/*< 56>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*< 58>*/ 		printf(/* textboxtype: 2, unk: 0, line: 24 */ "U kunt op uw <color blue<kaart>coloroff> zien waar Beedles\nwolkenwinkel nu is. Om toegang te\nkrijgen moet u de <color red<grote bel>coloroff> luiden die\neronder hangt.")
          	  case 1:
/*< 57>*/ 		printf(/* textboxtype: 0, unk: 2, line: 25 */ "Om <color blue<Beedles>coloroff> wolkenwinkel binnen te\nkunnen gaan dient u wellicht de <color red<grote bel\n>coloroff>te luiden die eronder hangt.\n\n<0x10012:0x00000002>Meester, helaas beschikt u niet over het\njuiste <color red<gereedschap>coloroff> om de bel te luiden. U\nheeft iets nodig om de bel vanaf een\nafstand te raken.")
          	}
          }

          void entrypoint_006_900() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "Op de kleine eilandjes rond <color blue<Skyloft>coloroff> kunt\nu oeroude bouwwerken tegenkomen.\n<color blue<\n\n>coloroff>Ik acht de kans meer dan 80% dat er op\ndie eilandjes schatkisten verborgen zijn.")
          }

          void entrypoint_006_918() {
/*< 32>*/ 	start()
/*< 33>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*< 35>*/ 		printf(/* textboxtype: 0, unk: 0, line: 29 */ "Ik acht het nu voor 95% zeker dat de\ngeruchten over <color blue<Vleros>coloroff> gaan, die onder de\nschuur bij de begraafplaats woont.")
/*< 36>*/ 		switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          		  case 0:
/*< 54>*/ 			printf(/* textboxtype: 0, unk: 2, line: 31 */ "Vleros heeft genoeg <color yellow<dankbaarheids-\nkristallen>coloroff> om een mens te worden. Ik acht\nde kans 60% dat de monstergeruchten nu\nverdwijnen.\nEr blijft een kans van 40% dat de\ngeruchten niet verdwijnen, omdat mensen\nsterk overtuigd kunnen zijn van spook-\nverhalen.")
          		  case 1:
/*< 37>*/ 			printf(/* textboxtype: 2, unk: 0, line: 30 */ "Vleros heeft u gevraagd om\n<color yellow<dankbaarheidskristallen>coloroff> te verzamelen, in\nde hoop dat die hem in een mens kunnen\nveranderen.\nAls u hem hierbij helpt, <0x10012:0x00000002>meester, is er een\nkans van 85% dat het u ook iets oplevert.")
          		}
          	  case 1:
/*< 34>*/ 		printf(/* textboxtype: 0, unk: 2, line: 28 */ "Als u hier meer over wilt weten, is mijn\nadvies om naar de<color blue< Oranje Poen>coloroff>, te gaan,\nomdat de geruchten daar vandaan komen.")
          	}
          }

          void entrypoint_006_902() {
          	start()
/*<  1>*/ 	switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          	  case 0:
/*<  3>*/ 		printf(/* textboxtype: 0, unk: 2, line: 4 */ "De ridder in spe <color blue<Struiz >coloroff>zoekt regelmatig\nhet hemelrijk af om dit eiland te vinden.\n\n\nOnlangs schijnt hij <color blue<in de donderwolk>coloroff> een\neiland gevonden te hebben dat geschikt is\nvoor insecten.")
          	  case 1:
/*<  2>*/ 		printf(/* textboxtype: 2, unk: 0, line: 3 */ "Er zijn echter geen verslagen van mensen\ndie het daadwerkelijk hebben bezocht.")
          	}
          }

          void entrypoint_006_955() {
/*< 42>*/ 	start()
/*< 43>*/ 	switch (story_flags[702 /* us: 805A9B22 0x04, jp: 805ACDA2 0x04 */]) {
          	  case 0:
/*< 49>*/ 		switch (random(3)) {
          		  case 0:
          			flw_44:
/*< 44>*/ 			printf(/* textboxtype: 2, unk: 0, line: 84 */ "<color blue<Pijlen>coloroff> die geen doelwit raken, kunnen\nopnieuw worden opgepakt.")
          		  case 1:
          			goto flw_44
          		  case 2:
          			flw_45:
/*< 45>*/ 			printf(/* textboxtype: 0, unk: 0, line: 83 */ "Uw arm is sterk genoeg om de stammen\nvan kleine boompjes door te kunnen\nhakken met je zwaard.\n\nAls een deel van een boom gloeit, moet u\ndat deel proberen te raken om een rupee\nte ontvangen.")
          		}
          	  case 1:
          		goto flw_45
          	}
          }

          void entrypoint_006_904() {
/*<  4>*/ 	start()
/*<  5>*/ 	switch (story_flags[398 /* us: 805A9B0E 0x01, jp: 805ACD8E 0x01 */]) {
          	  case 0:
/*<  8>*/ 		switch (has_rupees(20)) {
          		  case 0:
/*<  7>*/ 			printf(/* textboxtype: 0, unk: 0, line: 8 */ "Hier is een attractie waar u met relatief\nweinig inspanning veel rupees kunt\nwinnen.\n\nDaarbij moet u er wel voor zorgen dat uw\nbeurs niet vol is, anders kunt u uw prijs\nniet meenemen.")
          		  case 1:
/*<  9>*/ 			printf(/* textboxtype: 2, unk: 0, line: 9 */ "Hier is een attractie waar u met relatief\nweinig inspanning veel rupees kunt\nwinnen.\n\nVolgens mijn gegevens moet u betalen om\nmee te kunnen doen.")
          		}
          	  case 1:
/*<  6>*/ 		printf(/* textboxtype: 0, unk: 2, line: 7 */ "Er wordt hier een attractie gebouwd waar\nu met relatief weinig inspanning veel\nrupees kunt winnen.")
          	}
          }

          void entrypoint_006_940() {
/*< 50>*/ 	start()
/*< 51>*/ 	switch (story_flags[89 /* us: 805A9AEC 0x08, jp: 805ACD6C 0x08 */]) {
          	  case 0:
/*< 52>*/ 		printf(/* textboxtype: 0, unk: 2, line: 58 */ "Technisch gezien is de volgende\ninformatie geen gerucht, maar ik zal dit\ntoch met u delen.\n\nAls u een <color red<godinnenblok>coloroff> activeert, ben ik\nin staat de energie te volgen die de lucht\nin schiet.\n\nOp basis van het traject zal ik op uw\nkaart aangeven waar in het hemelrijk de\nenergie heen is gegaan, <0x10012:0x00000002>meester.")
          	  case 1:
/*< 53>*/ 		printf(/* textboxtype: 2, unk: 0, line: 57 */ "Herinnert u zich de <color red<mysterieuze blokken\n>coloroff>met het teken van de godin die her en der\nover het oppervlak zijn verspreid?\n\nEr schijnt een connectie te zijn tussen die\nblokken en de gesloten schatkisten die je op\n<color blue<Skyloft>coloroff> en de omliggende eilanden kunt\nvinden.")
          	}
          }

          void entrypoint_006_908() {
/*< 28>*/ 	start()
/*< 29>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*< 31>*/ 		printf(/* textboxtype: 2, unk: 0, line: 15 */ "Beedles wolkenwinkel bevindt zich na\nzonsondergang niet meer boven <color blue<Skyloft>coloroff>.\nWaarschijnlijk bevindt hij zich 's nachts\nop een ander eiland.\n<color red<Als u in de winkel blijft tot de avond valt>coloroff>,\nontdekt u wellicht waar hij naartoe gaat.")
          	  case 1:
/*< 30>*/ 		printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10012:0x00000002>Meester, helaas beschikt u niet over het\njuiste <color red<gereedschap>coloroff> om de bel mee te\nluiden. U heeft iets nodig om de bel vanaf\neen afstand te raken.")
          	}
          }

          void entrypoint_006_943() {
/*< 12>*/ 	start()
/*< 47>*/ 	switch (story_flags[702 /* us: 805A9B22 0x04, jp: 805ACDA2 0x04 */]) {
          	  case 0:
/*< 48>*/ 		switch (random(3)) {
          		  case 0:
          			flw_16:
/*< 16>*/ 			printf(/* textboxtype: 2, unk: 0, line: 63 */ "In een ver verleden heeft een krijger\neen manier bedacht om veel pijlen te\nvergaren. Bent u met deze techniek\nbekend, <0x10012:0x00000002>meester?\n[1-]Vertel, vertel![2]Ken ik al.")
/*< 13>*/ 			switch (choice(2)) {
          			  case 0:
/*< 15>*/ 				printf(/* textboxtype: 0, unk: 2, line: 64 */ "De krijger pakte haar <color blue<houten schild>coloroff> in de\nhand en begaf zich richting het fort van\nde Bokoblins.\n\nZe bleef verscholen achter haar schild\nterwijl de Bokoblins pijlen op haar neer\nlieten regenen. Daarna trok ze zich veilig\nterug.\nHaar schild <color red<zat vol pijlen>coloroff>. Ze kon die\npijlen eruit halen en met haar eigen boog\nterugschieten naar de vijand.")
          				flw_14:
/*< 14>*/ 				printf(/* textboxtype: 0, unk: 0, line: 65 */ "U kunt deze strategie zelf proberen met\nuw eigen houten schild, <0x10012:0x00000002>meester.\n\n\nHierbij zal uw schild wel beschadigd\nraken, dus let op <color red<schildmeter>coloroff>.")
          			  case 1:
          				goto flw_14
          			}
          		  case 1:
          			goto flw_16
          		  case 2:
          			flw_46:
/*< 46>*/ 			printf(/* textboxtype: 0, unk: 0, line: 62 */ "<color blue<Vogelveren>coloroff> vormen een nuttig materiaal\nvoor het verbeteren van uw uitrusting.\n\n\nHet is echter voor 90% zeker dat u een\nbepaald gereedschap nodig heeft om\nvogels met dit soort veren te vangen.")
          		}
          	  case 1:
          		goto flw_46
          	}
          }

          void entrypoint_006_944() {
/*< 17>*/ 	start()
/*< 18>*/ 	switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          	  case 0:
/*< 19>*/ 		printf(/* textboxtype: 0, unk: 0, line: 68 */ "Als u met een <color blue<waterdrakenschub >coloroff>terug-\nkeert op een plek met veel water, is het\nmogelijk dat u nieuwe gebieden ontdekt.\n\nAangezien u dit object al heeft, bent u\nmomenteel in staat diep te duiken.")
          	  case 1:
/*< 20>*/ 		printf(/* textboxtype: 0, unk: 2, line: 67 */ "Ergens in de wereld schijnt een object te\nzijn dat een <color blue<waterdrakenschub>coloroff> heet.\nVolgens geruchten stelt dit mensen in\nstaat diep te duiken.")
          	}
          }

          void entrypoint_006_945() {
/*< 21>*/ 	start()
/*< 22>*/ 	switch (story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */]) {
          	  case 0:
/*< 23>*/ 		printf(/* textboxtype: 0, unk: 0, line: 71 */ "Aangezien u deze <color blue<vuurwerende oorbellen>coloroff>\nreeds bezit, bent u in staat gebieden met\nextreem hoge temperaturen te bezoeken.\n\nMijn advies is om gebieden die eerder te\nheet waren, nu grondig te doorzoeken.")
          	  case 1:
/*< 24>*/ 		printf(/* textboxtype: 0, unk: 2, line: 70 */ "Er schijnen <color blue<vuurwerende oorbellen >coloroff>te\nbestaan, die de drager beschermen tegen\nextreme hitte.")
          	}
          }

          void entrypoint_006_928() {
/*< 38>*/ 	start()
/*< 39>*/ 	switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          	  case 0:
/*< 41>*/ 		printf(/* textboxtype: 0, unk: 0, line: 44 */ "Als u te dicht bij Levias komt, bestaat het\ngevaar dat uw Loftwing in botsing komt\nmet zijn vinnen of staart.")
          	  case 1:
/*< 40>*/ 		printf(/* textboxtype: 0, unk: 2, line: 43 */ "Met het jaar wordt hij groter en groter.\nDe laatste tijd heeft men hem echter niet\ngezien.")
          	}
          }

