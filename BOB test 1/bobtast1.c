#pragma platform(VEX2, Arduino)

// Simple program to cycle through the file system and play all sound files

task main()
{
	bPlaySounds = true;
	nVolume = 7;
	PlaySoundFile("Blue.wav");
	//PlaySoundFile("sos");
	wait1Msec(100);
}
