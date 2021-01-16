#pragma once
#include "common.hpp"
#include "fiber_pool.hpp"
#include "structs/lists.hpp"
#include "structs/player.hpp"
#include "structs/temp.hpp"
#include "features/functions.hpp"
#include "features/notify.hpp"
#include "features/stats.hpp"
#include "features/teleport.hpp"

namespace big
{
	inline Player g_playerId;
	inline Player g_selectedPlayerId;

	inline player g_currentPlayer;
	inline player g_selectedPlayer;
	inline player g_players[32];

	// Temporary Variable struct
	inline temp g_temp = temp{};

	// Screen Width & Height
	inline int x, y;

	namespace features
	{
		void run_tick();
		void script_func();

		void cage_gun();
		void delete_gun();
		void gravity_gun();
		void money_gun();
		void vehicle_gun();

		void replay_interface();
		void version_mismatch();

		void disable_phone();
		void god_mode();
		void never_wanted();
		void noclip();
		void no_bike_fall();
		void no_idle_kick();
		void no_ragdoll();
		void off_radar();
		void population_modifiers();
		void spectate_player();
		void speedo_meter();
		void spoof_rank();
		void sticky_tyres();
		void super_sprint();

		void update_screen_sizes();
		void update_player_structs();
	}
}
