# ArduinoRobotSimulator
Arduino robot simulator in UE4.

## Funzioni attualmente implementate
- Supporto per scrittura Setup e Loop Arduino in c++ con Visual Studio.
- Set completo di funzioni per il movimento del robot (Eventualmente persoanlizzabili in c++).
- Set funzioni di lettura dati sensori (Eventualmente persoanlizzabili in c++).
- Avvio, stop, pausa e riavvio simulazione mediante interfaccia utente.
- Modifica velocità simulazione mediante interfaccia utente.
- Messaggi di debug a schermo.
- Modifica in tempo reale dei sensori presenti sul robot (inplementata trammite UI).
- Supporto sensori infrarossi.
- Suporto sensori luce.
- Modifica in tempo reale degli emetittori presenti sugli ostacoli (inplementata trammite UI).
- Emettitori luce.
- Supporto modalità di debug con visualizzazione coni visivi dei sensori e dati in tempo reale dei sensori.
- Possibilità di utilizzare modelli personalizzati per i coni visivi dei sensori (formato .fbx o .obj).
- Simulazione fisica dei movimenti mediante PhysX 3.3 physics engine (https://developer.nvidia.com/physx-sdk).
-

## Problemi noti
- Calcolo distanza dei sensori utilizza il centro del oggetto rendendo le misure leggermente piu grandi di qunato sarebbero in realtà.
- Il cambio di velocità del tempo (rallentamento e aumento velocità) influenza tutti gli oggetti compresa la camera controllata dall'utente.

## Parti mancanti
- Supporto file di log personalizzato.
- Interfaccia di debug.
- Servomotore personalizzabile con supporto sensori.
- Funzioni alternative per il movimento (SetSpeed).
- Emettitore di suono.
- Emettitore di gas.
- Sensore suoni.
- Sensore gas.
- Generatore di campi randomici con seed.
- Conteggio automantico dei puinti.

# Documentazione
Guada all'uso delle funzioni attualmente disponibili.

## Interfaccia e controlli

## Scrittura del codice Arduino

## Personalizzazione del robot
