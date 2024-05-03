class DynamicMusicPlayerRegistryEnoch : DynamicMusicPlayerRegistry
{
	void DynamicMusicPlayerRegistryEnoch()
	{
		m_WorldName = "enoch";
	}

	override protected void RegisterTracksLocationStatic()
	{
		super.RegisterTracksLocationStatic();
		
		array<ref TVectorArray> militarySila;
		militarySila = {
			{"7251.812500 287.418854 2541.844238", "7389.284668 320.115479 2979.039795"},
			{"7402.536621 294.709839 2506.142334", "7531.667969 289.916229 2597.169434"},
			{"7571.889648 289.450012 2556.947266", "7730.658203 302.170502 2766.522217"},
		};
		
		array<ref TVectorArray> militaryDambog;
		militaryDambog = {
			{"7251.812500 287.418854 2541.844238", "7389.284668 320.115479 2979.039795"},
			{"7402.536621 294.709839 2506.142334", "7531.667969 289.916229 2597.169434"},
			{"7571.889648 289.450012 2556.947266", "7730.658203 302.170502 2766.522217"},
		};

		RegisterTrackLocationStaticMultiRectangle("Music_loc_sila_day_SoundSet", militarySila, DynamicMusicPlayerTimeOfDay.DAY, true);
		RegisterTrackLocationStaticMultiRectangle("Music_loc_sila_night_SoundSet", militarySila, DynamicMusicPlayerTimeOfDay.NIGHT, true);

		RegisterTrackLocationStaticMultiRectangle("Music_loc_dambog_facility_SoundSet", militaryDambog, DynamicMusicPlayerTimeOfDay.ANY, true);

		array<ref TVectorArray> cityTopolin;
		cityTopolin = {
			{"995.490173 226.337814 7095.782227", "2089.490479 198.122864 7527.783203"},
			{"1875.490356 238.067444 6843.782715", "2051.490479 227.538040 7039.782715"},
		};

		array<ref TVectorArray> citySitnik;
		citySitnik = {
			{"11185.399414 183.049896 9302.782227", "11662.526367 193.876877 9836.079102"},
		};
		
		array<ref TVectorArray> cityNadbor;
		cityNadbor = {
			{"11185.399414 183.049896 9302.782227", "11662.526367 193.876877 9836.079102"},
		};

		array<ref TVectorArray> locationKamienialomMaksymilian;
		locationKamienialomMaksymilian = {
			{"11185.399414 183.049896 9302.782227", "11662.526367 193.876877 9836.079102"},
		};		

		/*
		RegisterTrackLocationStaticMultiRectangle("Music_loc_city_day_1_SoundSet", cityTopolin, DynamicMusicPlayerTimeOfDay.DAY);
		RegisterTrackLocationStaticMultiRectangle("Music_loc_city_day_2_SoundSet", cityTopolin, DynamicMusicPlayerTimeOfDay.DAY);
		RegisterTrackLocationStaticMultiRectangle("Music_loc_city_night_1_SoundSet", cityTopolin, DynamicMusicPlayerTimeOfDay.NIGHT);
		RegisterTrackLocationStaticMultiRectangle("Music_loc_city_night_2_SoundSet", cityTopolin, DynamicMusicPlayerTimeOfDay.NIGHT);

		RegisterTrackLocationStaticMultiRectangle("Music_loc_city_day_1_SoundSet", citySitnik, DynamicMusicPlayerTimeOfDay.DAY);
		RegisterTrackLocationStaticMultiRectangle("Music_loc_city_day_2_SoundSet", citySitnik, DynamicMusicPlayerTimeOfDay.DAY);
		RegisterTrackLocationStaticMultiRectangle("Music_loc_city_night_1_SoundSet", citySitnik, DynamicMusicPlayerTimeOfDay.NIGHT);
		RegisterTrackLocationStaticMultiRectangle("Music_loc_city_night_2_SoundSet", citySitnik, DynamicMusicPlayerTimeOfDay.NIGHT);

		RegisterTrackLocationStaticMultiRectangle("Music_loc_city_day_1_SoundSet", cityNadbor, DynamicMusicPlayerTimeOfDay.DAY);
		RegisterTrackLocationStaticMultiRectangle("Music_loc_city_day_2_SoundSet", cityNadbor, DynamicMusicPlayerTimeOfDay.DAY);
		RegisterTrackLocationStaticMultiRectangle("Music_loc_city_night_1_SoundSet", cityNadbor, DynamicMusicPlayerTimeOfDay.NIGHT);
		RegisterTrackLocationStaticMultiRectangle("Music_loc_city_night_2_SoundSet", cityNadbor, DynamicMusicPlayerTimeOfDay.NIGHT);
		*/
		
//____________________________________________enoch Industrial zones Kamienialom Maksymilian ___________________________________________

		/*
		RegisterTrackLocationStaticMultiRectangle(
			"Music_loc_vybor_night_SoundSet", //========> PLACEHOLDER
			{
				{"6264.760254 333.656799 4577.062500", "6573.874023 289.850372 5216.987305"},
			},
			DynamicMusicPlayerTimeOfDay.DAY,
		);

		RegisterTrackLocationStaticMultiRectangle(
			"Music_loc_vybor_night_SoundSet", //========> PLACEHOLDER
			{
				{"6264.760254 333.656799 4577.062500", "6573.874023 289.850372 5216.987305"},
			},
			DynamicMusicPlayerTimeOfDay.DAY,
		);

		RegisterTrackLocationStaticMultiRectangle(
			"Music_loc_vybor_night_SoundSet", //========> PLACEHOLDER
			{
				{"6264.760254 333.656799 4577.062500", "6573.874023 289.850372 5216.987305"},
			},
			DynamicMusicPlayerTimeOfDay.NIGHT,
		);

		RegisterTrackLocationStaticMultiRectangle(
			"Music_loc_vybor_night_SoundSet", //========> PLACEHOLDER
			{
				{"6264.760254 333.656799 4577.062500", "6573.874023 289.850372 5216.987305"},
			},
			DynamicMusicPlayerTimeOfDay.NIGHT,
		);

//____________________________________________enoch Industrial zones Sitnik ___________________________________________

		RegisterTrackLocationStaticMultiRectangle(
			"Music_loc_vybor_night_SoundSet", //========> PLACEHOLDER
			{
				{"10841.546875 186.514709 8927.775391", "11106.150391 184.123566 9100.101563"},
			},
			DynamicMusicPlayerTimeOfDay.DAY,
		);

		RegisterTrackLocationStaticMultiRectangle(
			"Music_loc_vybor_night_SoundSet", //========> PLACEHOLDER
			{
				{"10841.546875 186.514709 8927.775391", "11106.150391 184.123566 9100.101563"},
			},
			DynamicMusicPlayerTimeOfDay.DAY,
		);

		RegisterTrackLocationStaticMultiRectangle(
			"Music_loc_vybor_night_SoundSet", //========> PLACEHOLDER
			{
				{"10841.546875 186.514709 8927.775391", "11106.150391 184.123566 9100.101563"},
			},
			DynamicMusicPlayerTimeOfDay.NIGHT,
		);

		RegisterTrackLocationStaticMultiRectangle(
			"Music_loc_vybor_night_SoundSet", //========> PLACEHOLDER
			{
				{"10841.546875 186.514709 8927.775391", "11106.150391 184.123566 9100.101563"},
			},
			DynamicMusicPlayerTimeOfDay.NIGHT,
		);

//____________________________________________enoch Industrial zones Polcrabiec ___________________________________________

		RegisterTrackLocationStaticMultiRectangle(
			"Music_loc_vybor_night_SoundSet", //========> PLACEHOLDER
			{
				{"11456.487305 239.268250 6957.194336", "11615.328125 252.476089 7191.990723"},
			},
			DynamicMusicPlayerTimeOfDay.DAY,
		);

		RegisterTrackLocationStaticMultiRectangle(
			"Music_loc_vybor_night_SoundSet", //========> PLACEHOLDER
			{
				{"11456.487305 239.268250 6957.194336", "11615.328125 252.476089 7191.990723"},
			},
			DynamicMusicPlayerTimeOfDay.DAY,
		);

		RegisterTrackLocationStaticMultiRectangle(
			"Music_loc_vybor_night_SoundSet", //========> PLACEHOLDER
			{
				{"11456.487305 239.268250 6957.194336", "11615.328125 252.476089 7191.990723"},
			},
			DynamicMusicPlayerTimeOfDay.NIGHT,
		);

		RegisterTrackLocationStaticMultiRectangle(
			"Music_loc_vybor_night_SoundSet", //========> PLACEHOLDER
			{
				{"11456.487305 239.268250 6957.194336", "11615.328125 252.476089 7191.990723"},
			},
			DynamicMusicPlayerTimeOfDay.NIGHT,
		);

//____________________________________________enoch Industrial zones Topolin ___________________________________________

		RegisterTrackLocationStaticMultiRectangle(
			"Music_loc_vybor_night_SoundSet", //========> PLACEHOLDER
			{
				{"1464.602051 176.482468 7505.294922", "2040.492432 178.189728 7771.675781"},
				{"1176.336182 173.983521 7621.583496", "1464.249756 223.463821 8182.164063"},
			},
			DynamicMusicPlayerTimeOfDay.DAY,
		);

		RegisterTrackLocationStaticMultiRectangle(
			"Music_loc_vybor_night_SoundSet", //========> PLACEHOLDER
			{
				{"1464.602051 176.482468 7505.294922", "2040.492432 178.189728 7771.675781"},
				{"1176.336182 173.983521 7621.583496", "1464.249756 223.463821 8182.164063"},
			},
			DynamicMusicPlayerTimeOfDay.DAY,
		);

		RegisterTrackLocationStaticMultiRectangle(
			"Music_loc_vybor_night_SoundSet", //========> PLACEHOLDER
			{
				{"1464.602051 176.482468 7505.294922", "2040.492432 178.189728 7771.675781"},
				{"1176.336182 173.983521 7621.583496", "1464.249756 223.463821 8182.164063"},
			},
			DynamicMusicPlayerTimeOfDay.NIGHT,
		);

		RegisterTrackLocationStaticMultiRectangle(
			"Music_loc_vybor_night_SoundSet", //========> PLACEHOLDER
			{
				{"1464.602051 176.482468 7505.294922", "2040.492432 178.189728 7771.675781"},
				{"1176.336182 173.983521 7621.583496", "1464.249756 223.463821 8182.164063"},
			},
			DynamicMusicPlayerTimeOfDay.NIGHT,
		);

//____________________________________________enoch Industrial zones Bagno ___________________________________________

		RegisterTrackLocationStaticMultiRectangle(
			"Music_loc_vybor_night_SoundSet", //========> PLACEHOLDER
			{
				{"11762.052734 173.049332 10605.531250", "11831.578125 174.884338 10824.485352"},
			},
			DynamicMusicPlayerTimeOfDay.DAY,
		);

		RegisterTrackLocationStaticMultiRectangle(
			"Music_loc_vybor_night_SoundSet", //========> PLACEHOLDER
			{
				{"11762.052734 173.049332 10605.531250", "11831.578125 174.884338 10824.485352"},
			},
			DynamicMusicPlayerTimeOfDay.DAY,
		);

		RegisterTrackLocationStaticMultiRectangle(
			"Music_loc_vybor_night_SoundSet", //========> PLACEHOLDER
			{
				{"11762.052734 173.049332 10605.531250", "11831.578125 174.884338 10824.485352"},
			},
			DynamicMusicPlayerTimeOfDay.NIGHT,
		);

		RegisterTrackLocationStaticMultiRectangle(
			"Music_loc_vybor_night_SoundSet", //========> PLACEHOLDER
			{
				{"11762.052734 173.049332 10605.531250", "11831.578125 174.884338 10824.485352"},
			},
			DynamicMusicPlayerTimeOfDay.NIGHT,
		);

//____________________________________________enoch Industrial zones Kamienialom Maksymilian quarry ___________________________________________

		RegisterTrackLocationStaticMultiRectangle(
			"Music_loc_vybor_night_SoundSet", //========> PLACEHOLDER
			{
				{"6876.904297 352.914032 4468.218750", "7164.382324 282.643829 4758.872070"},
			},
			DynamicMusicPlayerTimeOfDay.DAY,
		);

		RegisterTrackLocationStaticMultiRectangle(
			"Music_loc_vybor_night_SoundSet", //========> PLACEHOLDER
			{
				{"6876.904297 352.914032 4468.218750", "7164.382324 282.643829 4758.872070"},
			},
			DynamicMusicPlayerTimeOfDay.DAY,
		);

		RegisterTrackLocationStaticMultiRectangle(
			"Music_loc_vybor_night_SoundSet", //========> PLACEHOLDER
			{
				{"6876.904297 352.914032 4468.218750", "7164.382324 282.643829 4758.872070"},
			},
			DynamicMusicPlayerTimeOfDay.NIGHT,
		);

		RegisterTrackLocationStaticMultiRectangle(
			"Music_loc_vybor_night_SoundSet", //========> PLACEHOLDER
			{
				{"6876.904297 352.914032 4468.218750", "7164.382324 282.643829 4758.872070"},
			},
			DynamicMusicPlayerTimeOfDay.NIGHT,
		);

//____________________________________________enoch Prison ___________________________________________

		RegisterTrackLocationStaticMultiRectangle(
			"Music_loc_vybor_night_SoundSet", //========> PLACEHOLDER
			{
				{"5458.534668 300.189636 8675.219727", "5657.367188 297.970734 8845.516602"},
			},
			DynamicMusicPlayerTimeOfDay.DAY,
		);

		RegisterTrackLocationStaticMultiRectangle(
			"Music_loc_vybor_night_SoundSet", //========> PLACEHOLDER
			{
				{"5458.534668 300.189636 8675.219727", "5657.367188 297.970734 8845.516602"},
			},
			DynamicMusicPlayerTimeOfDay.DAY,
		);

		RegisterTrackLocationStaticMultiRectangle(
			"Music_loc_vybor_night_SoundSet", //========> PLACEHOLDER
			{
				{"5458.534668 300.189636 8675.219727", "5657.367188 297.970734 8845.516602"},
			},
			DynamicMusicPlayerTimeOfDay.NIGHT,
		);

		RegisterTrackLocationStaticMultiRectangle(
			"Music_loc_vybor_night_SoundSet", //========> PLACEHOLDER
			{
				{"5458.534668 300.189636 8675.219727", "5657.367188 297.970734 8845.516602"},
			},
			DynamicMusicPlayerTimeOfDay.NIGHT,
		);
		*/
	}
}
