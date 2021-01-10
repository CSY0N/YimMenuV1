#include "features.hpp"
#include "logger.hpp"
#include "natives.hpp"
#include "script.hpp"

namespace big
{
	void features::run_tick()
	{
		g_playerId = PLAYER::PLAYER_ID();

		update_player_structs();
		update_screen_sizes();

		g_rid_joiner.look_for_session();

		disable_phone();
		god_mode();
		join_message();
		never_wanted();
		no_bike_fall();
		no_idle_kick();
		no_ragdoll();
		off_radar();
		population_modifiers();
		reveal_players();
		spectate_player();
		speedo_meter();
		spoof_rank();
		sticky_tyres();
		super_sprint();
	}

	void features::script_func()
	{
		while (true)
		{
			TRY_CLAUSE
			{
				run_tick();
			}
			EXCEPT_CLAUSE
			script::get_current()->yield();
		}
	}
}
