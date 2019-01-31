#pragma once
///*****************************************************************************
//
// This file is part of the OpenHoldem project
//   Download page:         http://code.google.com/p/openholdembot/
//   Forums:                http://www.maxinmontreal.com/forums/index.php
//   Licensed under GPL v3: http://www.gnu.org/licenses/gpl.html
//
///*****************************************************************************
//
// Purpose:
//
///*****************************************************************************

// GENERAL STATS
// ICON disabled, as not supported by PT 4.
// New VPIP and PFR are NOW supported 
// We keep old way for these 2 stats with name conversion as Legacy
// Now we support an incredible number of statistics 
// As far as possible, every statistic in its name and in its description, is faithful to what is reported in PT4 that now is 100% supported
// Nothing from the old source has been eliminated 
// Only added and something renamed
// A special thank you to the whole community, which made this possible 
// We are Maxinmontreal 
// https://pt4.pokertracker.com/forums/viewtopic.php?f=59&t=49035
// http://www.maxinmontreal.com/forums/viewforum.php?f=273
// http://www.maxinmontreal.com/forums/viewtopic.php?f=273&t=20933
// http://www.maxinmontreal.com/forums/viewtopic.php?f=273&t=21561

// my added stats
#define PT4_QUERY_SUPPORT__NB_HANDS                         (TRUE)	// "number of hands"
#define PT4_QUERY_SUPPORT__CO_RFI                           (TRUE)	// "CO RFI"
#define PT4_QUERY_SUPPORT__BU_RFI                           (TRUE)	// "BU RFI"
#define PT4_QUERY_SUPPORT__SB_RFI                           (TRUE)	// "SB RFI"
#define PT4_QUERY_SUPPORT__CO105_RFI                        (TRUE)	// "CO RFI < 10.5 bb"
#define PT4_QUERY_SUPPORT__BU105_RFI                        (TRUE)	// "BU RFI < 10.5 bb"
#define PT4_QUERY_SUPPORT__SB105_RFI                        (TRUE)	// "SB RFI < 10.5 bb"
#define PT4_QUERY_SUPPORT__CO135_RFI                        (TRUE)	// "CO RFI from 10.5 to 13.5 bb"
#define PT4_QUERY_SUPPORT__BU135_RFI                        (TRUE)	// "BU RFI from 10.5 to 13.5 bb"
#define PT4_QUERY_SUPPORT__SB135_RFI                        (TRUE)	// "SB RFI from 10.5 to 13.5 bb"
#define PT4_QUERY_SUPPORT__CO16_RFI                         (TRUE)	// "CO RFI >= 13.5 bb"
#define PT4_QUERY_SUPPORT__BU16_RFI                         (TRUE)	// "BU RFI >= 13.5 bb"
#define PT4_QUERY_SUPPORT__SB16_RFI                         (TRUE)	// "SB RFI >= 13.5 bb"

#define PT4_QUERY_SUPPORT__BU_FOLD_TO_CO_OPEN               (TRUE)	// "bu_fold_to_co_open"
#define PT4_QUERY_SUPPORT__SB_FOLD_TO_CO_OPEN               (TRUE)	// "sb_fold_to_co_open"
#define PT4_QUERY_SUPPORT__BB_FOLD_TO_CO_OPEN               (TRUE)	// "bb_fold_to_co_open"
#define PT4_QUERY_SUPPORT__SB_FOLD_TO_BU_OPEN               (TRUE)	// "sb_fold_to_bu_open"
#define PT4_QUERY_SUPPORT__BB_FOLD_TO_BU_OPEN               (TRUE)	// "bb_fold_to_bu_open"
#define PT4_QUERY_SUPPORT__BB_FOLD_TO_SB_OPEN               (TRUE)	// "bb_fold_to_sb_open"
#define PT4_QUERY_SUPPORT__BU105_FOLD_TO_CO_OPEN            (TRUE)	// "bu105_fold_to_co_open"
#define PT4_QUERY_SUPPORT__SB105_FOLD_TO_CO_OPEN            (TRUE)	// "sb105_fold_to_co_open"
#define PT4_QUERY_SUPPORT__BB105_FOLD_TO_CO_OPEN            (TRUE)	// "bb105_fold_to_co_open"
#define PT4_QUERY_SUPPORT__SB105_FOLD_TO_BU_OPEN            (TRUE)	// "sb105_fold_to_bu_open"
#define PT4_QUERY_SUPPORT__BB105_FOLD_TO_BU_OPEN            (TRUE)	// "bb105_fold_to_bu_open"
#define PT4_QUERY_SUPPORT__BB105_FOLD_TO_SB_OPEN            (TRUE)	// "bb105_fold_to_sb_open"
#define PT4_QUERY_SUPPORT__BU135_FOLD_TO_CO_OPEN            (TRUE)	// "bu135_fold_to_co_open"
#define PT4_QUERY_SUPPORT__SB135_FOLD_TO_CO_OPEN            (TRUE)	// "sb135_fold_to_co_open"
#define PT4_QUERY_SUPPORT__BB135_FOLD_TO_CO_OPEN            (TRUE)	// "bb135_fold_to_co_open"
#define PT4_QUERY_SUPPORT__SB135_FOLD_TO_BU_OPEN            (TRUE)	// "sb135_fold_to_bu_open"
#define PT4_QUERY_SUPPORT__BB135_FOLD_TO_BU_OPEN            (TRUE)	// "bb135_fold_to_bu_open"
#define PT4_QUERY_SUPPORT__BB135_FOLD_TO_SB_OPEN            (TRUE)	// "bb135_fold_to_sb_open"
#define PT4_QUERY_SUPPORT__BU16_FOLD_TO_CO_OPEN             (TRUE)	// "bu16_fold_to_co_open"
#define PT4_QUERY_SUPPORT__SB16_FOLD_TO_CO_OPEN             (TRUE)	// "sb16_fold_to_co_open"
#define PT4_QUERY_SUPPORT__BB16_FOLD_TO_CO_OPEN             (TRUE)	// "bb16_fold_to_co_open"
#define PT4_QUERY_SUPPORT__SB16_FOLD_TO_BU_OPEN             (TRUE)	// "sb16_fold_to_bu_open"
#define PT4_QUERY_SUPPORT__BB16_FOLD_TO_BU_OPEN             (TRUE)	// "bb16_fold_to_bu_open"
#define PT4_QUERY_SUPPORT__BB16_FOLD_TO_SB_OPEN             (TRUE)	// "bb16_fold_to_sb_open"

#define PT4_QUERY_SUPPORT__CO_RFI_OPP                       (TRUE)	// "CO RFI opportunities"
#define PT4_QUERY_SUPPORT__BU_RFI_OPP                       (TRUE)	// "BU RFI opportunities"
#define PT4_QUERY_SUPPORT__SB_RFI_OPP                       (TRUE)	// "SB RFI opportunities"
#define PT4_QUERY_SUPPORT__CO105_RFI_OPP                    (TRUE)	// "CO RFI < 10.5 bb opportunities"
#define PT4_QUERY_SUPPORT__BU105_RFI_OPP                    (TRUE)	// "BU RFI < 10.5 bb opportunities"
#define PT4_QUERY_SUPPORT__SB105_RFI_OPP                    (TRUE)	// "SB RFI < 10.5 bb opportunities"
#define PT4_QUERY_SUPPORT__CO135_RFI_OPP                    (TRUE)	// "CO RFI from 10.5 to 13.5 bb opportunities"
#define PT4_QUERY_SUPPORT__BU135_RFI_OPP                    (TRUE)	// "BU RFI from 10.5 to 13.5 bb opportunities"
#define PT4_QUERY_SUPPORT__SB135_RFI_OPP                    (TRUE)	// "SB RFI from 10.5 to 13.5 bb opportunities"
#define PT4_QUERY_SUPPORT__CO16_RFI_OPP                     (TRUE)	// "CO RFI >= 13.5 bb opportunities"
#define PT4_QUERY_SUPPORT__BU16_RFI_OPP                     (TRUE)	// "BU RFI >= 13.5 bb opportunities"
#define PT4_QUERY_SUPPORT__SB16_RFI_OPP                     (TRUE)	// "SB RFI >= 13.5 bb opportunities"

#define PT4_QUERY_SUPPORT__BU_FOLD_TO_CO_OPEN_OPP           (TRUE)	// "bu_fold_to_co_open opportunities"
#define PT4_QUERY_SUPPORT__SB_FOLD_TO_CO_OPEN_OPP           (TRUE)	// "sb_fold_to_co_open opportunities"
#define PT4_QUERY_SUPPORT__BB_FOLD_TO_CO_OPEN_OPP           (TRUE)	// "bb_fold_to_co_open opportunities"
#define PT4_QUERY_SUPPORT__SB_FOLD_TO_BU_OPEN_OPP           (TRUE)	// "sb_fold_to_bu_open opportunities"
#define PT4_QUERY_SUPPORT__BB_FOLD_TO_BU_OPEN_OPP           (TRUE)	// "bb_fold_to_bu_open opportunities"
#define PT4_QUERY_SUPPORT__BB_FOLD_TO_SB_OPEN_OPP           (TRUE)	// "bb_fold_to_sb_open opportunities"
#define PT4_QUERY_SUPPORT__BU105_FOLD_TO_CO_OPEN_OPP        (TRUE)	// "bu105_fold_to_co_open opportunities"
#define PT4_QUERY_SUPPORT__SB105_FOLD_TO_CO_OPEN_OPP        (TRUE)	// "sb105_fold_to_co_open opportunities"
#define PT4_QUERY_SUPPORT__BB105_FOLD_TO_CO_OPEN_OPP        (TRUE)	// "bb105_fold_to_co_open opportunities"
#define PT4_QUERY_SUPPORT__SB105_FOLD_TO_BU_OPEN_OPP        (TRUE)	// "sb105_fold_to_bu_open opportunities"
#define PT4_QUERY_SUPPORT__BB105_FOLD_TO_BU_OPEN_OPP        (TRUE)	// "bb105_fold_to_bu_open opportunities"
#define PT4_QUERY_SUPPORT__BB105_FOLD_TO_SB_OPEN_OPP        (TRUE)	// "bb105_fold_to_sb_open opportunities"
#define PT4_QUERY_SUPPORT__BU135_FOLD_TO_CO_OPEN_OPP        (TRUE)	// "bu135_fold_to_co_open opportunities"
#define PT4_QUERY_SUPPORT__SB135_FOLD_TO_CO_OPEN_OPP        (TRUE)	// "sb135_fold_to_co_open opportunities"
#define PT4_QUERY_SUPPORT__BB135_FOLD_TO_CO_OPEN_OPP        (TRUE)	// "bb135_fold_to_co_open opportunities"
#define PT4_QUERY_SUPPORT__SB135_FOLD_TO_BU_OPEN_OPP        (TRUE)	// "sb135_fold_to_bu_open opportunities"
#define PT4_QUERY_SUPPORT__BB135_FOLD_TO_BU_OPEN_OPP        (TRUE)	// "bb135_fold_to_bu_open opportunities"
#define PT4_QUERY_SUPPORT__BB135_FOLD_TO_SB_OPEN_OPP        (TRUE)	// "bb135_fold_to_sb_open opportunities"
#define PT4_QUERY_SUPPORT__BU16_FOLD_TO_CO_OPEN_OPP         (TRUE)	// "bu16_fold_to_co_open opportunities"
#define PT4_QUERY_SUPPORT__SB16_FOLD_TO_CO_OPEN_OPP         (TRUE)	// "sb16_fold_to_co_open opportunities"
#define PT4_QUERY_SUPPORT__BB16_FOLD_TO_CO_OPEN_OPP         (TRUE)	// "bb16_fold_to_co_open opportunities"
#define PT4_QUERY_SUPPORT__SB16_FOLD_TO_BU_OPEN_OPP         (TRUE)	// "sb16_fold_to_bu_open opportunities"
#define PT4_QUERY_SUPPORT__BB16_FOLD_TO_BU_OPEN_OPP         (TRUE)	// "bb16_fold_to_bu_open opportunities"
#define PT4_QUERY_SUPPORT__BB16_FOLD_TO_SB_OPEN_OPP         (TRUE)	// "bb16_fold_to_sb_open opportunities"


//default
#define PT4_QUERY_SUPPORT__VPIP                             (TRUE)	// "PT4 vpip"
#define PT4_QUERY_SUPPORT__RFI                              (TRUE)	// "rfi"
#define PT4_QUERY_SUPPORT__PFR                              (TRUE)	// "PT4 pfr"
#define PT4_QUERY_SUPPORT__WSSD                             (TRUE)	// "wssd"

const int k_number_of_pokertracker_stats =
        (PT4_QUERY_SUPPORT__NB_HANDS ? 1 : 0)
        + (PT4_QUERY_SUPPORT__CO_RFI ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BU_RFI ? 1 : 0)
        + (PT4_QUERY_SUPPORT__SB_RFI ? 1 : 0)
        + (PT4_QUERY_SUPPORT__CO105_RFI ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BU105_RFI ? 1 : 0)
        + (PT4_QUERY_SUPPORT__SB105_RFI ? 1 : 0)
        + (PT4_QUERY_SUPPORT__CO135_RFI ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BU135_RFI ? 1 : 0)
        + (PT4_QUERY_SUPPORT__SB135_RFI ? 1 : 0)
        + (PT4_QUERY_SUPPORT__CO16_RFI ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BU16_RFI ? 1 : 0)
        + (PT4_QUERY_SUPPORT__SB16_RFI ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BU_FOLD_TO_CO_OPEN ? 1 : 0)
        + (PT4_QUERY_SUPPORT__SB_FOLD_TO_CO_OPEN ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BB_FOLD_TO_CO_OPEN ? 1 : 0)
        + (PT4_QUERY_SUPPORT__SB_FOLD_TO_BU_OPEN ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BB_FOLD_TO_BU_OPEN ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BB_FOLD_TO_SB_OPEN ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BU105_FOLD_TO_CO_OPEN ? 1 : 0)
        + (PT4_QUERY_SUPPORT__SB105_FOLD_TO_CO_OPEN ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BB105_FOLD_TO_CO_OPEN ? 1 : 0)
        + (PT4_QUERY_SUPPORT__SB105_FOLD_TO_BU_OPEN ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BB105_FOLD_TO_BU_OPEN ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BB105_FOLD_TO_SB_OPEN ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BU135_FOLD_TO_CO_OPEN ? 1 : 0)
        + (PT4_QUERY_SUPPORT__SB135_FOLD_TO_CO_OPEN ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BB135_FOLD_TO_CO_OPEN ? 1 : 0)
        + (PT4_QUERY_SUPPORT__SB135_FOLD_TO_BU_OPEN ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BB135_FOLD_TO_BU_OPEN ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BB135_FOLD_TO_SB_OPEN ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BU16_FOLD_TO_CO_OPEN ? 1 : 0)
        + (PT4_QUERY_SUPPORT__SB16_FOLD_TO_CO_OPEN ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BB16_FOLD_TO_CO_OPEN ? 1 : 0)
        + (PT4_QUERY_SUPPORT__SB16_FOLD_TO_BU_OPEN ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BB16_FOLD_TO_BU_OPEN ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BB16_FOLD_TO_SB_OPEN ? 1 : 0)

        + (PT4_QUERY_SUPPORT__VPIP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__RFI ? 1 : 0)
        + (PT4_QUERY_SUPPORT__PFR ? 1 : 0)
        + (PT4_QUERY_SUPPORT__WSSD ? 1 : 0)

        + (PT4_QUERY_SUPPORT__CO_RFI_OPP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BU_RFI_OPP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__SB_RFI_OPP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__CO105_RFI_OPP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BU105_RFI_OPP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__SB105_RFI_OPP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__CO135_RFI_OPP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BU135_RFI_OPP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__SB135_RFI_OPP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__CO16_RFI_OPP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BU16_RFI_OPP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__SB16_RFI_OPP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BU_FOLD_TO_CO_OPEN_OPP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__SB_FOLD_TO_CO_OPEN_OPP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BB_FOLD_TO_CO_OPEN_OPP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__SB_FOLD_TO_BU_OPEN_OPP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BB_FOLD_TO_BU_OPEN_OPP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BB_FOLD_TO_SB_OPEN_OPP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BU105_FOLD_TO_CO_OPEN_OPP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__SB105_FOLD_TO_CO_OPEN_OPP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BB105_FOLD_TO_CO_OPEN_OPP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__SB105_FOLD_TO_BU_OPEN_OPP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BB105_FOLD_TO_BU_OPEN_OPP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BB105_FOLD_TO_SB_OPEN_OPP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BU135_FOLD_TO_CO_OPEN_OPP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__SB135_FOLD_TO_CO_OPEN_OPP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BB135_FOLD_TO_CO_OPEN_OPP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__SB135_FOLD_TO_BU_OPEN_OPP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BB135_FOLD_TO_BU_OPEN_OPP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BB135_FOLD_TO_SB_OPEN_OPP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BU16_FOLD_TO_CO_OPEN_OPP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__SB16_FOLD_TO_CO_OPEN_OPP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BB16_FOLD_TO_CO_OPEN_OPP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__SB16_FOLD_TO_BU_OPEN_OPP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BB16_FOLD_TO_BU_OPEN_OPP ? 1 : 0)
        + (PT4_QUERY_SUPPORT__BB16_FOLD_TO_SB_OPEN_OPP ? 1 : 0);

// PokerTracker support
enum PT_Groups {
    pt_group_basic = 1,
    pt_group_advanced = 2,
    pt_group_positional = 3
};

enum PT_UpdateTypes {
    pt_updateType_noUpdate = 0,
    pt_updateType_updateBasic = 1,
    pt_updateType_updateAll = 2
};

enum PT_StatTypes {
    pt_statType_Ring = 0,
    pt_statType_Tourney = 1
};

struct t_QueryDefinition {
    CString name;
    CString description_for_editor;
    CString query;
    int stat_group;
};

// PokerTracker naming conventions: 
//   http://www.pokertracker.com/guides/PT3/tutorials/using-custom-reports-and-statistics#Naming-conventions
t_QueryDefinition query_definitions[k_number_of_pokertracker_stats] =
{
#if PT4_QUERY_SUPPORT__NB_HANDS
    // PT4 query to get number of hands in the database 
    {
        // name
        "hands",
        // description_for_editor
        "Poker Tracker number of hands that are in the database",
        // query
        "SELECT count(*) as result \
        FROM    player as P, cash_hand_player_statistics as S \
        WHERE   S.id_player = P.id_player AND \
                S.id_gametype = 1 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%'",
        // stat_group
        pt_group_basic
    },
#endif


#if PT4_QUERY_SUPPORT__CO_RFI
    // PT4 query to get CO RFI 
    {
        // name
        "co_rfi",
        // description_for_editor
        "Poker Tracker CO RFI",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT 	(SUM(CASE WHEN S.flg_p_open_opp AND S.flg_p_first_raise AND S.position = 1 THEN  1 ELSE  0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.flg_p_open_opp AND S.position = 1 THEN  1 ELSE  0 END))  AS ActionOpportunities \
        FROM   	player as P, cash_hand_player_statistics as S, lookup_positions AS LP, cash_limit AS TL \
        WHERE  	S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                LP.position = S.position AND \
                LP.cnt_players = S.cnt_players_lookup_position AND \
                S.id_gametype = 1 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_basic
    },
#endif

#if PT4_QUERY_SUPPORT__BU_RFI
    // PT4 query to get BU RFI 
    {
        // name
        "bu_rfi",
        // description_for_editor
        "Poker Tracker BU RFI",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT 	(SUM(CASE WHEN S.flg_p_open_opp AND S.flg_p_first_raise AND S.position = 0 THEN  1 ELSE  0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.flg_p_open_opp AND S.position = 0 THEN  1 ELSE  0 END))  AS ActionOpportunities \
        FROM   	player as P, cash_hand_player_statistics as S, lookup_positions AS LP, cash_limit AS TL \
        WHERE  	S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                LP.position = S.position AND \
                LP.cnt_players = S.cnt_players_lookup_position AND \
                S.id_gametype = 1 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_basic
    },
#endif

#if PT4_QUERY_SUPPORT__SB_RFI
    // PT4 query to get SB RFI 
    {
        // name
        "sb_rfi",
        // description_for_editor
        "Poker Tracker SB RFI",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT 	(SUM(CASE WHEN S.flg_p_open_opp AND S.flg_p_first_raise AND S.position = 9 THEN  1 ELSE  0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.flg_p_open_opp AND S.position = 9 THEN  1 ELSE  0 END))  AS ActionOpportunities \
        FROM   	player as P, cash_hand_player_statistics as S, lookup_positions AS LP, cash_limit AS TL \
        WHERE  	S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                LP.position = S.position AND \
                LP.cnt_players = S.cnt_players_lookup_position AND \
                S.id_gametype = 1 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_basic
    },
#endif

#if PT4_QUERY_SUPPORT__CO105_RFI
    // PT4 query to get CO RFI < 10.5 bb
    {
        // name
        "co105_rfi",
        // description_for_editor
        "Poker Tracker CO RFI < 10.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT 	(SUM(CASE WHEN S.flg_p_open_opp AND S.flg_p_first_raise AND S.position = 1 THEN  1 ELSE  0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.flg_p_open_opp AND S.position = 1 THEN  1 ELSE  0 END))  AS ActionOpportunities \
        FROM   	player as P, cash_hand_player_statistics as S, lookup_positions AS LP, cash_limit AS TL \
        WHERE  	S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                LP.position = S.position AND \
                LP.cnt_players = S.cnt_players_lookup_position AND \
                S.amt_p_effective_stack / TL.amt_bb < 10.5 AND \
                S.id_gametype = 1 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_basic
    },
#endif

#if PT4_QUERY_SUPPORT__BU105_RFI
    // PT4 query to get BU RFI  < 10.5 bb
    {
        // name
        "bu105_rfi",
        // description_for_editor
        "Poker Tracker BU RFI < 10.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT 	(SUM(CASE WHEN S.flg_p_open_opp AND S.flg_p_first_raise AND S.position = 0 THEN  1 ELSE  0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.flg_p_open_opp AND S.position = 0 THEN  1 ELSE  0 END))  AS ActionOpportunities \
        FROM   	player as P, cash_hand_player_statistics as S, lookup_positions AS LP, cash_limit AS TL \
        WHERE  	S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                LP.position = S.position AND \
                LP.cnt_players = S.cnt_players_lookup_position AND \
                S.amt_p_effective_stack / TL.amt_bb < 10.5 AND \
                S.id_gametype = 1 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_basic
    },
#endif

#if PT4_QUERY_SUPPORT__SB105_RFI
    // PT4 query to get SB RFI < 10.5 bb 
    {
        // name
        "sb105_rfi",
        // description_for_editor
        "Poker Tracker SB RFI < 10.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT 	(SUM(CASE WHEN S.flg_p_open_opp AND S.flg_p_first_raise AND S.position = 9 THEN  1 ELSE  0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.flg_p_open_opp AND S.position = 9 THEN  1 ELSE  0 END))  AS ActionOpportunities \
        FROM   	player as P, cash_hand_player_statistics as S, lookup_positions AS LP, cash_limit AS TL \
        WHERE  	S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                LP.position = S.position AND \
                LP.cnt_players = S.cnt_players_lookup_position AND \
                S.amt_p_effective_stack / TL.amt_bb < 10.5 AND \
                S.id_gametype = 1 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_basic
    },
#endif

#if PT4_QUERY_SUPPORT__CO135_RFI
    // PT4 query to get CO RFI from 10.5 to 13.5 bb
    {
        // name
        "co135_rfi",
        // description_for_editor
        "Poker Tracker CO RFI from 10.5 to 13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT 	(SUM(CASE WHEN S.flg_p_open_opp AND S.flg_p_first_raise AND S.position = 1 THEN  1 ELSE  0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.flg_p_open_opp AND S.position = 1 THEN  1 ELSE  0 END))  AS ActionOpportunities \
        FROM   	player as P, cash_hand_player_statistics as S, lookup_positions AS LP, cash_limit AS TL \
        WHERE  	S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                LP.position = S.position AND \
                LP.cnt_players = S.cnt_players_lookup_position AND \
                S.amt_p_effective_stack / TL.amt_bb >= 10.5 AND \
                S.amt_p_effective_stack / TL.amt_bb < 13.5 AND \
                S.id_gametype = 1 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_basic
    },
#endif

#if PT4_QUERY_SUPPORT__BU135_RFI
    // PT4 query to get BU RFI  from 10.5 to 13.5 bb
    {
        // name
        "bu135_rfi",
        // description_for_editor
        "Poker Tracker BU RFI from 10.5 to 13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT 	(SUM(CASE WHEN S.flg_p_open_opp AND S.flg_p_first_raise AND S.position = 0 THEN  1 ELSE  0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.flg_p_open_opp AND S.position = 0 THEN  1 ELSE  0 END))  AS ActionOpportunities \
        FROM   	player as P, cash_hand_player_statistics as S, lookup_positions AS LP, cash_limit AS TL \
        WHERE  	S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                LP.position = S.position AND \
                LP.cnt_players = S.cnt_players_lookup_position AND \
                S.amt_p_effective_stack / TL.amt_bb >= 10.5 AND \
                S.amt_p_effective_stack / TL.amt_bb < 13.5 AND \
                S.id_gametype = 1 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_basic
    },
#endif

#if PT4_QUERY_SUPPORT__SB135_RFI
    // PT4 query to get SB RFI from 10.5 to 13.5 bb 
    {
        // name
        "sb135_rfi",
        // description_for_editor
        "Poker Tracker SB RFI from 10.5 to 13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT 	(SUM(CASE WHEN S.flg_p_open_opp AND S.flg_p_first_raise AND S.position = 9 THEN  1 ELSE  0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.flg_p_open_opp AND S.position = 9 THEN  1 ELSE  0 END))  AS ActionOpportunities \
        FROM   	player as P, cash_hand_player_statistics as S, lookup_positions AS LP, cash_limit AS TL \
        WHERE  	S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                LP.position = S.position AND \
                LP.cnt_players = S.cnt_players_lookup_position AND \
                S.amt_p_effective_stack / TL.amt_bb >= 10.5 AND \
                S.amt_p_effective_stack / TL.amt_bb < 13.5 AND \
                S.id_gametype = 1 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_basic
    },
#endif

#if PT4_QUERY_SUPPORT__CO16_RFI
    // PT4 query to get CO RFI >= 13.5 bb
    {
        // name
        "co16_rfi",
        // description_for_editor
        "Poker Tracker CO RFI >= 13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT 	(SUM(CASE WHEN S.flg_p_open_opp AND S.flg_p_first_raise AND S.position = 1 THEN  1 ELSE  0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.flg_p_open_opp AND S.position = 1 THEN  1 ELSE  0 END))  AS ActionOpportunities \
        FROM   	player as P, cash_hand_player_statistics as S, lookup_positions AS LP, cash_limit AS TL \
        WHERE  	S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                LP.position = S.position AND \
                LP.cnt_players = S.cnt_players_lookup_position AND \
                S.amt_p_effective_stack / TL.amt_bb >= 13.5 AND \
                S.id_gametype = 1 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_basic
    },
#endif

#if PT4_QUERY_SUPPORT__BU16_RFI
    // PT4 query to get BU RFI  >= 13.5 bb
    {
        // name
        "bu16_rfi",
        // description_for_editor
        "Poker Tracker BU RFI >= 13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT 	(SUM(CASE WHEN S.flg_p_open_opp AND S.flg_p_first_raise AND S.position = 0 THEN  1 ELSE  0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.flg_p_open_opp AND S.position = 0 THEN  1 ELSE  0 END))  AS ActionOpportunities \
        FROM   	player as P, cash_hand_player_statistics as S, lookup_positions AS LP, cash_limit AS TL \
        WHERE  	S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                LP.position = S.position AND \
                LP.cnt_players = S.cnt_players_lookup_position AND \
                S.amt_p_effective_stack / TL.amt_bb >= 13.5 AND \
                S.id_gametype = 1 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_basic
    },
#endif

#if PT4_QUERY_SUPPORT__SB16_RFI
    // PT4 query to get SB RFI >= 13.5 bb 
    {
        // name
        "sb16_rfi",
        // description_for_editor
        "Poker Tracker SB RFI >= 13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT 	(SUM(CASE WHEN S.flg_p_open_opp AND S.flg_p_first_raise AND S.position = 9 THEN  1 ELSE  0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.flg_p_open_opp AND S.position = 9 THEN  1 ELSE  0 END))  AS ActionOpportunities \
        FROM   	player as P, cash_hand_player_statistics as S, lookup_positions AS LP, cash_limit AS TL \
        WHERE  	S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                LP.position = S.position AND \
                LP.cnt_players = S.cnt_players_lookup_position AND \
                S.amt_p_effective_stack / TL.amt_bb >= 13.5 AND \
                S.id_gametype = 1 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_basic
    },
#endif


#if PT4_QUERY_SUPPORT__BU_FOLD_TO_CO_OPEN
    // PT4 query to get BU fold % when CO open 
    {
        // name
        "bu_fold_to_co_open",
        // description_for_editor
        "Poker Tracker BU fold when CO open ",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN LA.action = 'F' AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' AND S.amt_p_2bet_facing > 0 THEN 1 ELSE 0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 0 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__SB_FOLD_TO_CO_OPEN
    // PT4 query to get SB fold % when CO open 
    {
        // name
        "sb_fold_to_co_open",
        // description_for_editor
        "Poker Tracker SB fold when CO open ",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN LA.action = 'F' AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' AND S.amt_p_2bet_facing > 0 THEN 1 ELSE 0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 9 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__BB_FOLD_TO_CO_OPEN
    // PT4 query to get BB fold % when CO open 
    {
        // name
        "bb_fold_to_co_open",
        // description_for_editor
        "Poker Tracker BB fold when CO open ",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN LA.action = 'F' AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' AND S.amt_p_2bet_facing > 0 THEN 1 ELSE 0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 8 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__SB_FOLD_TO_BU_OPEN
    // PT4 query to get SB fold % when BU open 
    {
        // name
        "sb_fold_to_bu_open",
        // description_for_editor
        "Poker Tracker SB fold when BU open ",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN LA.action = 'F' AND HS.str_aggressors_p LIKE '80%' AND HS.str_actors_p LIKE '0%' AND S.amt_p_2bet_facing > 0 THEN 1 ELSE 0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '80%' AND HS.str_actors_p LIKE '0%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 9 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__BB_FOLD_TO_BU_OPEN
    // PT4 query to get BB fold % when BU open 
    {
        // name
        "bb_fold_to_bu_open",
        // description_for_editor
        "Poker Tracker BB fold when BU open ",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN LA.action = 'F' AND HS.str_aggressors_p LIKE '80%' AND HS.str_actors_p LIKE '0%' AND S.amt_p_2bet_facing > 0 THEN 1 ELSE 0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '80%' AND HS.str_actors_p LIKE '0%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 8 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__BB_FOLD_TO_SB_OPEN
    // PT4 query to get BB fold % when SB open 
    {
        // name
        "bb_fold_to_sb_open",
        // description_for_editor
        "Poker Tracker BB fold when SB open ",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN LA.action = 'F' AND HS.str_aggressors_p LIKE '89%' AND HS.str_actors_p LIKE '9%' AND S.amt_p_2bet_facing > 0 THEN 1 ELSE 0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '89%' AND HS.str_actors_p LIKE '9%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 8 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__BU105_FOLD_TO_CO_OPEN
    // PT4 query to get BU fold % when CO open and eff stack < 10.5 bb
    {
        // name
        "bu105_fold_to_co_open",
        // description_for_editor
        "Poker Tracker BU fold when CO open and eff stack < 10.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN LA.action = 'F' AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' AND S.amt_p_2bet_facing > 0 THEN 1 ELSE 0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 0 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb < 10.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__SB105_FOLD_TO_CO_OPEN
    // PT4 query to get SB fold % when CO open and eff stack < 10.5 bb
    {
        // name
        "sb105_fold_to_co_open",
        // description_for_editor
        "Poker Tracker SB fold when CO open and eff stack < 10.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN LA.action = 'F' AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' AND S.amt_p_2bet_facing > 0 THEN 1 ELSE 0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 9 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb < 10.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__BB105_FOLD_TO_CO_OPEN
    // PT4 query to get BB fold % when CO open and eff stack < 10.5 bb
    {
        // name
        "bb105_fold_to_co_open",
        // description_for_editor
        "Poker Tracker BB fold when CO open and eff stack < 10.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN LA.action = 'F' AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' AND S.amt_p_2bet_facing > 0 THEN 1 ELSE 0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 8 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb < 10.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__SB105_FOLD_TO_BU_OPEN
    // PT4 query to get SB fold % when BU open and eff stack < 10.5 bb
    {
        // name
        "sb105_fold_to_bu_open",
        // description_for_editor
        "Poker Tracker SB fold when BU open and eff stack < 10.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN LA.action = 'F' AND HS.str_aggressors_p LIKE '80%' AND HS.str_actors_p LIKE '0%' AND S.amt_p_2bet_facing > 0 THEN 1 ELSE 0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '80%' AND HS.str_actors_p LIKE '0%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 9 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb < 10.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__BB105_FOLD_TO_BU_OPEN
    // PT4 query to get BB fold % when BU open and eff stack < 10.5 bb
    {
        // name
        "bb105_fold_to_bu_open",
        // description_for_editor
        "Poker Tracker BB fold when BU open and eff stack < 10.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN LA.action = 'F' AND HS.str_aggressors_p LIKE '80%' AND HS.str_actors_p LIKE '0%' AND S.amt_p_2bet_facing > 0 THEN 1 ELSE 0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '80%' AND HS.str_actors_p LIKE '0%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 8 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb < 10.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__BB105_FOLD_TO_SB_OPEN
    // PT4 query to get BB fold % when SB open and eff stack < 10.5 bb
    {
        // name
        "bb105_fold_to_sb_open",
        // description_for_editor
        "Poker Tracker BB fold when SB open and eff stack < 10.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN LA.action = 'F' AND HS.str_aggressors_p LIKE '89%' AND HS.str_actors_p LIKE '9%' AND S.amt_p_2bet_facing > 0 THEN 1 ELSE 0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '89%' AND HS.str_actors_p LIKE '9%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 8 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb < 10.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__BU135_FOLD_TO_CO_OPEN
    // PT4 query to get BU fold % when CO open and eff stack >=10.5 and <13.5 bb
    {
        // name
        "bu135_fold_to_co_open",
        // description_for_editor
        "Poker Tracker BU fold when CO open and eff stack >=10.5 and <13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN LA.action = 'F' AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' AND S.amt_p_2bet_facing > 0 THEN 1 ELSE 0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 0 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb >= 10.5 AND \
                S.amt_p_effective_stack / TL.amt_bb < 13.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__SB135_FOLD_TO_CO_OPEN
    // PT4 query to get SB fold % when CO open and eff stack >=10.5 and <13.5 bb
    {
        // name
        "sb135_fold_to_co_open",
        // description_for_editor
        "Poker Tracker SB fold when CO open and eff stack >=10.5 and <13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN LA.action = 'F' AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' AND S.amt_p_2bet_facing > 0 THEN 1 ELSE 0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 9 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb >= 10.5 AND \
                S.amt_p_effective_stack / TL.amt_bb < 13.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__BB135_FOLD_TO_CO_OPEN
    // PT4 query to get BB fold % when CO open and eff stack >=10.5 and <13.5 bb
    {
        // name
        "bb135_fold_to_co_open",
        // description_for_editor
        "Poker Tracker BB fold when CO open and eff stack >=10.5 and <13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN LA.action = 'F' AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' AND S.amt_p_2bet_facing > 0 THEN 1 ELSE 0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 8 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb >= 10.5 AND \
                S.amt_p_effective_stack / TL.amt_bb < 13.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__SB135_FOLD_TO_BU_OPEN
    // PT4 query to get SB fold % when BU open and eff stack >=10.5 and <13.5 bb
    {
        // name
        "sb135_fold_to_bu_open",
        // description_for_editor
        "Poker Tracker SB fold when BU open and eff stack >=10.5 and <13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN LA.action = 'F' AND HS.str_aggressors_p LIKE '80%' AND HS.str_actors_p LIKE '0%' AND S.amt_p_2bet_facing > 0 THEN 1 ELSE 0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '80%' AND HS.str_actors_p LIKE '0%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 9 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb >= 10.5 AND \
                S.amt_p_effective_stack / TL.amt_bb < 13.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__BB135_FOLD_TO_BU_OPEN
    // PT4 query to get BB fold % when BU open and eff stack >=10.5 and <13.5 bb
    {
        // name
        "bb135_fold_to_bu_open",
        // description_for_editor
        "Poker Tracker BB fold when BU open and eff stack >=10.5 and <13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN LA.action = 'F' AND HS.str_aggressors_p LIKE '80%' AND HS.str_actors_p LIKE '0%' AND S.amt_p_2bet_facing > 0 THEN 1 ELSE 0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '80%' AND HS.str_actors_p LIKE '0%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 8 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb >= 10.5 AND \
                S.amt_p_effective_stack / TL.amt_bb < 13.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__BB135_FOLD_TO_SB_OPEN
    // PT4 query to get BB fold % when SB open and eff stack >=10.5 and <13.5 bb
    {
        // name
        "bb135_fold_to_sb_open",
        // description_for_editor
        "Poker Tracker BB fold when SB open and eff stack >=10.5 and <13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN LA.action = 'F' AND HS.str_aggressors_p LIKE '89%' AND HS.str_actors_p LIKE '9%' AND S.amt_p_2bet_facing > 0 THEN 1 ELSE 0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '89%' AND HS.str_actors_p LIKE '9%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 8 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb >= 10.5 AND \
                S.amt_p_effective_stack / TL.amt_bb < 13.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__BU16_FOLD_TO_CO_OPEN
    // PT4 query to get BU fold % when CO open and eff stack >=13.5 bb
    {
        // name
        "bu16_fold_to_co_open",
        // description_for_editor
        "Poker Tracker BU fold when CO open and eff stack >=13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN LA.action = 'F' AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' AND S.amt_p_2bet_facing > 0 THEN 1 ELSE 0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 0 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb >= 13.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__SB16_FOLD_TO_CO_OPEN
    // PT4 query to get SB fold % when CO open and eff stack >=13.5 bb
    {
        // name
        "sb16_fold_to_co_open",
        // description_for_editor
        "Poker Tracker SB fold when CO open and eff stack >=13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN LA.action = 'F' AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' AND S.amt_p_2bet_facing > 0 THEN 1 ELSE 0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 9 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb >= 13.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__BB16_FOLD_TO_CO_OPEN
    // PT4 query to get BB fold % when CO open and eff stack >=13.5 bb
    {
        // name
        "bb16_fold_to_co_open",
        // description_for_editor
        "Poker Tracker BB fold when CO open and eff stack >=13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN LA.action = 'F' AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' AND S.amt_p_2bet_facing > 0 THEN 1 ELSE 0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 8 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb >= 13.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__SB16_FOLD_TO_BU_OPEN
    // PT4 query to get SB fold % when BU open and eff stack >=13.5 bb
    {
        // name
        "sb16_fold_to_bu_open",
        // description_for_editor
        "Poker Tracker SB fold when BU open and eff stack >=13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN LA.action = 'F' AND HS.str_aggressors_p LIKE '80%' AND HS.str_actors_p LIKE '0%' AND S.amt_p_2bet_facing > 0 THEN 1 ELSE 0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '80%' AND HS.str_actors_p LIKE '0%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 9 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb >= 13.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__BB16_FOLD_TO_BU_OPEN
    // PT4 query to get BB fold % when BU open and eff stack >=13.5 bb
    {
        // name
        "bb16_fold_to_bu_open",
        // description_for_editor
        "Poker Tracker BB fold when BU open and eff stack >=13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN LA.action = 'F' AND HS.str_aggressors_p LIKE '80%' AND HS.str_actors_p LIKE '0%' AND S.amt_p_2bet_facing > 0 THEN 1 ELSE 0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '80%' AND HS.str_actors_p LIKE '0%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 8 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb >= 13.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__BB16_FOLD_TO_SB_OPEN
    // PT4 query to get BB fold % when SB open and eff stack >=13.5 bb
    {
        // name
        "bb16_fold_to_sb_open",
        // description_for_editor
        "Poker Tracker BB fold when SB open and eff stack >=13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (CAST(ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN LA.action = 'F' AND HS.str_aggressors_p LIKE '89%' AND HS.str_actors_p LIKE '9%' AND S.amt_p_2bet_facing > 0 THEN 1 ELSE 0 END)) AS ActionCount, \
                (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '89%' AND HS.str_actors_p LIKE '9%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 8 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb >= 13.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif


#if PT4_QUERY_SUPPORT__CO_RFI_OPP
    // PT4 query to get CO RFI opportunities
    {
        // name
        "co_rfi_opp",
        // description_for_editor
        "Poker Tracker CO RFI opportunities",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT 	(SUM(CASE WHEN S.flg_p_open_opp AND S.position = 1 THEN  1 ELSE  0 END))  AS ActionOpportunities \
        FROM   	player as P, cash_hand_player_statistics as S, lookup_positions AS LP, cash_limit AS TL \
        WHERE  	S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                LP.position = S.position AND \
                LP.cnt_players = S.cnt_players_lookup_position AND \
                S.id_gametype = 1 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_basic
    },
#endif

#if PT4_QUERY_SUPPORT__BU_RFI_OPP
    // PT4 query to get BU RFI opportunities
    {
        // name
        "bu_rfi_opp",
        // description_for_editor
        "Poker Tracker BU RFI opportunities",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT 	(SUM(CASE WHEN S.flg_p_open_opp AND S.position = 0 THEN  1 ELSE  0 END))  AS ActionOpportunities \
        FROM   	player as P, cash_hand_player_statistics as S, lookup_positions AS LP, cash_limit AS TL \
        WHERE  	S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                LP.position = S.position AND \
                LP.cnt_players = S.cnt_players_lookup_position AND \
                S.id_gametype = 1 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_basic
    },
#endif

#if PT4_QUERY_SUPPORT__SB_RFI_OPP
    // PT4 query to get SB RFI opportunities
    {
        // name
        "sb_rfi_opp",
        // description_for_editor
        "Poker Tracker SB RFI opportunities",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT 	(SUM(CASE WHEN S.flg_p_open_opp AND S.position = 9 THEN  1 ELSE  0 END))  AS ActionOpportunities \
        FROM   	player as P, cash_hand_player_statistics as S, lookup_positions AS LP, cash_limit AS TL \
        WHERE  	S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                LP.position = S.position AND \
                LP.cnt_players = S.cnt_players_lookup_position AND \
                S.id_gametype = 1 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_basic
    },
#endif

#if PT4_QUERY_SUPPORT__CO105_RFI_OPP
    // PT4 query to get CO RFI opportunities < 10.5 bb
    {
        // name
        "co105_rfi_opp",
        // description_for_editor
        "Poker Tracker CO RFI opportunities < 10.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT 	(SUM(CASE WHEN S.flg_p_open_opp AND S.position = 1 THEN  1 ELSE  0 END))  AS ActionOpportunities \
        FROM   	player as P, cash_hand_player_statistics as S, lookup_positions AS LP, cash_limit AS TL \
        WHERE  	S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                LP.position = S.position AND \
                LP.cnt_players = S.cnt_players_lookup_position AND \
                S.amt_p_effective_stack / TL.amt_bb < 10.5 AND \
                S.id_gametype = 1 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_basic
    },
#endif

#if PT4_QUERY_SUPPORT__BU105_RFI_OPP
    // PT4 query to get BU RFI opportunities < 10.5 bb
    {
        // name
        "bu105_rfi_opp",
        // description_for_editor
        "Poker Tracker BU RFI opportunities < 10.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT 	(SUM(CASE WHEN S.flg_p_open_opp AND S.position = 0 THEN  1 ELSE  0 END))  AS ActionOpportunities \
        FROM   	player as P, cash_hand_player_statistics as S, lookup_positions AS LP, cash_limit AS TL \
        WHERE  	S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                LP.position = S.position AND \
                LP.cnt_players = S.cnt_players_lookup_position AND \
                S.amt_p_effective_stack / TL.amt_bb < 10.5 AND \
                S.id_gametype = 1 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_basic
    },
#endif

#if PT4_QUERY_SUPPORT__SB105_RFI_OPP
    // PT4 query to get SB RFI opportunities < 10.5 bb
    {
        // name
        "sb105_rfi_opp",
        // description_for_editor
        "Poker Tracker SB RFI opportunities < 10.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT 	(SUM(CASE WHEN S.flg_p_open_opp AND S.position = 9 THEN  1 ELSE  0 END))  AS ActionOpportunities \
        FROM   	player as P, cash_hand_player_statistics as S, lookup_positions AS LP, cash_limit AS TL \
        WHERE  	S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                LP.position = S.position AND \
                LP.cnt_players = S.cnt_players_lookup_position AND \
                S.amt_p_effective_stack / TL.amt_bb < 10.5 AND \
                S.id_gametype = 1 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_basic
    },
#endif

#if PT4_QUERY_SUPPORT__CO135_RFI_OPP
    // PT4 query to get CO RFI opportunities >=10.5 and <13.5 bb
    {
        // name
        "co135_rfi_opp",
        // description_for_editor
        "Poker Tracker CO RFI opportunities >=10.5 and <13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT 	(SUM(CASE WHEN S.flg_p_open_opp AND S.position = 1 THEN  1 ELSE  0 END))  AS ActionOpportunities \
        FROM   	player as P, cash_hand_player_statistics as S, lookup_positions AS LP, cash_limit AS TL \
        WHERE  	S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                LP.position = S.position AND \
                LP.cnt_players = S.cnt_players_lookup_position AND \
                S.amt_p_effective_stack / TL.amt_bb >= 10.5 AND \
                S.amt_p_effective_stack / TL.amt_bb < 13.5 AND \
                S.id_gametype = 1 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_basic
    },
#endif

#if PT4_QUERY_SUPPORT__BU135_RFI_OPP
    // PT4 query to get BU RFI opportunities >=10.5 and <13.5 bb
    {
        // name
        "bu135_rfi_opp",
        // description_for_editor
        "Poker Tracker BU RFI opportunities >=10.5 and <13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT 	(SUM(CASE WHEN S.flg_p_open_opp AND S.position = 0 THEN  1 ELSE  0 END))  AS ActionOpportunities \
        FROM   	player as P, cash_hand_player_statistics as S, lookup_positions AS LP, cash_limit AS TL \
        WHERE  	S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                LP.position = S.position AND \
                LP.cnt_players = S.cnt_players_lookup_position AND \
                S.amt_p_effective_stack / TL.amt_bb >= 10.5 AND \
                S.amt_p_effective_stack / TL.amt_bb < 13.5 AND \
                S.id_gametype = 1 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_basic
    },
#endif

#if PT4_QUERY_SUPPORT__SB135_RFI_OPP
    // PT4 query to get SB RFI opportunities >=10.5 and <13.5 bb
    {
        // name
        "sb135_rfi_opp",
        // description_for_editor
        "Poker Tracker SB RFI opportunities >=10.5 and <13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT 	(SUM(CASE WHEN S.flg_p_open_opp AND S.position = 9 THEN  1 ELSE  0 END))  AS ActionOpportunities \
        FROM   	player as P, cash_hand_player_statistics as S, lookup_positions AS LP, cash_limit AS TL \
        WHERE  	S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                LP.position = S.position AND \
                LP.cnt_players = S.cnt_players_lookup_position AND \
                S.amt_p_effective_stack / TL.amt_bb >= 10.5 AND \
                S.amt_p_effective_stack / TL.amt_bb < 13.5 AND \
                S.id_gametype = 1 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_basic
    },
#endif

#if PT4_QUERY_SUPPORT__CO16_RFI_OPP
    // PT4 query to get CO RFI opportunities >=13.5 bb
    {
        // name
        "co16_rfi_opp",
        // description_for_editor
        "Poker Tracker CO RFI opportunities >=13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT 	(SUM(CASE WHEN S.flg_p_open_opp AND S.position = 1 THEN  1 ELSE  0 END))  AS ActionOpportunities \
        FROM   	player as P, cash_hand_player_statistics as S, lookup_positions AS LP, cash_limit AS TL \
        WHERE  	S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                LP.position = S.position AND \
                LP.cnt_players = S.cnt_players_lookup_position AND \
                S.amt_p_effective_stack / TL.amt_bb >=13.5 AND \
                S.id_gametype = 1 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_basic
    },
#endif

#if PT4_QUERY_SUPPORT__BU16_RFI_OPP
    // PT4 query to get BU RFI opportunities >=13.5 bb
    {
        // name
        "bu16_rfi_opp",
        // description_for_editor
        "Poker Tracker BU RFI opportunities >=13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT 	(SUM(CASE WHEN S.flg_p_open_opp AND S.position = 0 THEN  1 ELSE  0 END))  AS ActionOpportunities \
        FROM   	player as P, cash_hand_player_statistics as S, lookup_positions AS LP, cash_limit AS TL \
        WHERE  	S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                LP.position = S.position AND \
                LP.cnt_players = S.cnt_players_lookup_position AND \
                S.amt_p_effective_stack / TL.amt_bb >=13.5 AND \
                S.id_gametype = 1 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_basic
    },
#endif

#if PT4_QUERY_SUPPORT__SB16_RFI_OPP
    // PT4 query to get SB RFI opportunities >=13.5 bb
    {
        // name
        "sb16_rfi_opp",
        // description_for_editor
        "Poker Tracker SB RFI opportunities >=13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT 	(SUM(CASE WHEN S.flg_p_open_opp AND S.position = 9 THEN  1 ELSE  0 END))  AS ActionOpportunities \
        FROM   	player as P, cash_hand_player_statistics as S, lookup_positions AS LP, cash_limit AS TL \
        WHERE  	S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                LP.position = S.position AND \
                LP.cnt_players = S.cnt_players_lookup_position AND \
                S.amt_p_effective_stack / TL.amt_bb >=13.5 AND \
                S.id_gametype = 1 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_basic
    },
#endif


#if PT4_QUERY_SUPPORT__BU_FOLD_TO_CO_OPEN_OPP
    // PT4 query to get BU fold opportunities % when CO open
    {
        // name
        "bu_fold_to_co_open_opp",
        // description_for_editor
        "Poker Tracker BU fold opportunities when CO open",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 0 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__SB_FOLD_TO_CO_OPEN_OPP
    // PT4 query to get SB fold opportunities % when CO open
    {
        // name
        "sb_fold_to_co_open_opp",
        // description_for_editor
        "Poker Tracker SB fold opportunities when CO open",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 9 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__BB_FOLD_TO_CO_OPEN_OPP
    // PT4 query to get BB fold opportunities % when CO open
    {
        // name
        "bb_fold_to_co_open_opp",
        // description_for_editor
        "Poker Tracker BB fold opportunities when CO open",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 8 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__SB_FOLD_TO_BU_OPEN_OPP
    // PT4 query to get SB fold opportunities % when BU open
    {
        // name
        "sb_fold_to_bu_open_opp",
        // description_for_editor
        "Poker Tracker SB fold opportunities when BU open",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '80%' AND HS.str_actors_p LIKE '0%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 9 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__BB_FOLD_TO_BU_OPEN_OPP
    // PT4 query to get BB fold opportunities % when BU open
    {
        // name
        "bb_fold_to_bu_open_opp",
        // description_for_editor
        "Poker Tracker BB fold opportunities when BU open",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '80%' AND HS.str_actors_p LIKE '0%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 8 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__BB_FOLD_TO_SB_OPEN_OPP
    // PT4 query to get BB fold opportunities % when SB open
    {
        // name
        "bb_fold_to_sb_open_opp",
        // description_for_editor
        "Poker Tracker BB fold opportunities when SB open",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '89%' AND HS.str_actors_p LIKE '9%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 8 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__BU105_FOLD_TO_CO_OPEN_OPP
    // PT4 query to get BU fold opportunities % when CO open <10.5 bb
    {
        // name
        "bu105_fold_to_co_open_opp",
        // description_for_editor
        "Poker Tracker BU fold opportunities when CO open <10.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 0 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb < 10.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__SB105_FOLD_TO_CO_OPEN_OPP
    // PT4 query to get SB fold opportunities % when CO open <10.5 bb
    {
        // name
        "sb105_fold_to_co_open_opp",
        // description_for_editor
        "Poker Tracker SB fold opportunities when CO open <10.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 9 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb < 10.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__BB105_FOLD_TO_CO_OPEN_OPP
    // PT4 query to get BB fold opportunities % when CO open <10.5 bb
    {
        // name
        "bb105_fold_to_co_open_opp",
        // description_for_editor
        "Poker Tracker BB fold opportunities when CO open <10.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 8 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb < 10.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__SB105_FOLD_TO_BU_OPEN_OPP
    // PT4 query to get SB fold opportunities % when BU open <10.5 bb
    {
        // name
        "sb105_fold_to_bu_open_opp",
        // description_for_editor
        "Poker Tracker SB fold opportunities when BU open <10.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '80%' AND HS.str_actors_p LIKE '0%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 9 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb < 10.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__BB105_FOLD_TO_BU_OPEN_OPP
    // PT4 query to get BB fold opportunities % when BU open <10.5 bb
    {
        // name
        "bb105_fold_to_bu_open_opp",
        // description_for_editor
        "Poker Tracker BB fold opportunities when BU open <10.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '80%' AND HS.str_actors_p LIKE '0%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 8 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb < 10.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__BB105_FOLD_TO_SB_OPEN_OPP
    // PT4 query to get BB fold opportunities % when SB open <10.5 bb
    {
        // name
        "bb105_fold_to_sb_open_opp",
        // description_for_editor
        "Poker Tracker BB fold opportunities when SB open <10.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '89%' AND HS.str_actors_p LIKE '9%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 8 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb < 10.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__BU135_FOLD_TO_CO_OPEN_OPP
    // PT4 query to get BU fold opportunities % when CO open >=10.5 and <13.5 bb
    {
        // name
        "bu135_fold_to_co_open_opp",
        // description_for_editor
        "Poker Tracker BU fold opportunities when CO open >=10.5 and <13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 0 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb >= 10.5 AND \
                S.amt_p_effective_stack / TL.amt_bb < 13.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__SB135_FOLD_TO_CO_OPEN_OPP
    // PT4 query to get SB fold opportunities % when CO open >=10.5 and <13.5 bb
    {
        // name
        "sb135_fold_to_co_open_opp",
        // description_for_editor
        "Poker Tracker SB fold opportunities when CO open >=10.5 and <13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 9 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb >= 10.5 AND \
                S.amt_p_effective_stack / TL.amt_bb < 13.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__BB135_FOLD_TO_CO_OPEN_OPP
    // PT4 query to get BB fold opportunities % when CO open >=10.5 and <13.5 bb
    {
        // name
        "bb135_fold_to_co_open_opp",
        // description_for_editor
        "Poker Tracker BB fold opportunities when CO open >=10.5 and <13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 8 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb >= 10.5 AND \
                S.amt_p_effective_stack / TL.amt_bb < 13.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__SB135_FOLD_TO_BU_OPEN_OPP
    // PT4 query to get SB fold opportunities % when BU open >=10.5 and <13.5 bb
    {
        // name
        "sb135_fold_to_bu_open_opp",
        // description_for_editor
        "Poker Tracker SB fold opportunities when BU open >=10.5 and <13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '80%' AND HS.str_actors_p LIKE '0%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 9 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb >= 10.5 AND \
                S.amt_p_effective_stack / TL.amt_bb < 13.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__BB135_FOLD_TO_BU_OPEN_OPP
    // PT4 query to get BB fold opportunities % when BU open >=10.5 and <13.5 bb
    {
        // name
        "bb135_fold_to_bu_open_opp",
        // description_for_editor
        "Poker Tracker BB fold opportunities when BU open >=10.5 and <13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '80%' AND HS.str_actors_p LIKE '0%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 8 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb >= 10.5 AND \
                S.amt_p_effective_stack / TL.amt_bb < 13.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__BB135_FOLD_TO_SB_OPEN_OPP
    // PT4 query to get BB fold opportunities % when SB open >=10.5 and <13.5 bb
    {
        // name
        "bb135_fold_to_sb_open_opp",
        // description_for_editor
        "Poker Tracker BB fold opportunities when SB open >=10.5 and <13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '89%' AND HS.str_actors_p LIKE '9%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 8 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb >= 10.5 AND \
                S.amt_p_effective_stack / TL.amt_bb < 13.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__BU16_FOLD_TO_CO_OPEN_OPP
    // PT4 query to get BU fold opportunities % when CO open >=13.5 bb
    {
        // name
        "bu16_fold_to_co_open_opp",
        // description_for_editor
        "Poker Tracker BU fold opportunities when CO open >=13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 0 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb >= 13.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__SB16_FOLD_TO_CO_OPEN_OPP
    // PT4 query to get SB fold opportunities % when CO open >=13.5 bb
    {
        // name
        "sb16_fold_to_co_open_opp",
        // description_for_editor
        "Poker Tracker SB fold opportunities when CO open >=13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 9 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb >= 13.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__BB16_FOLD_TO_CO_OPEN_OPP
    // PT4 query to get BB fold opportunities % when CO open >=13.5 bb
    {
        // name
        "bb16_fold_to_co_open_opp",
        // description_for_editor
        "Poker Tracker BB fold opportunities when CO open >=13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '81%' AND HS.str_actors_p LIKE '1%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 8 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb >= 13.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__SB16_FOLD_TO_BU_OPEN_OPP
    // PT4 query to get SB fold opportunities % when BU open >=13.5 bb
    {
        // name
        "sb16_fold_to_bu_open_opp",
        // description_for_editor
        "Poker Tracker SB fold opportunities when BU open >=13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '80%' AND HS.str_actors_p LIKE '0%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 9 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb >= 13.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__BB16_FOLD_TO_BU_OPEN_OPP
    // PT4 query to get BB fold opportunities % when BU open >=13.5 bb
    {
        // name
        "bb16_fold_to_bu_open_opp",
        // description_for_editor
        "Poker Tracker BB fold opportunities when BU open >=13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '80%' AND HS.str_actors_p LIKE '0%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 8 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb >= 13.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif

#if PT4_QUERY_SUPPORT__BB16_FOLD_TO_SB_OPEN_OPP
    // PT4 query to get BB fold opportunities % when SB open >=13.5 bb
    {
        // name
        "bb16_fold_to_sb_open_opp",
        // description_for_editor
        "Poker Tracker BB fold opportunities when SB open >=13.5 bb",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN - 1 ELSE (ActionOpportunities) END) AS result \
        FROM( \
        SELECT  (SUM(CASE WHEN S.amt_p_2bet_facing > 0 AND HS.str_aggressors_p LIKE '89%' AND HS.str_actors_p LIKE '9%' THEN 1 ELSE 0 END)) AS ActionOpportunities \
        FROM    player AS P, cash_hand_player_statistics AS S, cash_hand_summary AS HS, lookup_actions AS LA, cash_limit AS TL \
        WHERE   S.position = 8 AND \
                S.id_player = P.id_player AND \
                TL.id_limit = S.id_limit AND \
                HS.id_hand = S.id_hand AND \
                S.id_gametype = 1 AND \
                LA.id_action = S.id_action_p AND \
                S.amt_p_effective_stack / TL.amt_bb >= 13.5 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_positional
    },
#endif


#if PT4_QUERY_SUPPORT__VPIP
    // PT4 VPIP
    {
        // name
        "vpip",
        // description_for_editor
        "VPIP %",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN -1 ELSE (CAST (ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT  SUM(CASE WHEN flg_vpip THEN 1 ELSE 0 END) AS ActionCount, \
                SUM(CASE WHEN S.id_hand > 0 THEN 1 ELSE 0 END) - SUM(CASE WHEN LA_P.action = '' THEN 1 ELSE 0 END) AS ActionOpportunities \
        FROM   	player AS P, cash_hand_player_statistics AS S, lookup_actions AS LA_P \
        WHERE   S.id_player = P.id_player AND \
                LA_P.id_action = S.id_action_p AND \
                S.id_gametype = 1 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_basic
    },
#endif

#if PT4_QUERY_SUPPORT__RFI
    // PT4 RFI
    {
        // name
        "rfi",
        // description_for_editor
        "RFI %",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN -1 ELSE (CAST (ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT	SUM(CASE WHEN S.cnt_p_raise > 0 THEN 1 ELSE 0 END) AS ActionCount, \
    	        SUM(CASE WHEN LA.action LIKE '__%' OR (LA.action LIKE '_' AND (S.amt_before > (CL.amt_bb + S.amt_ante)) AND (S.amt_p_raise_facing < (S.amt_before - (S.amt_blind + S.amt_ante))) AND (S.flg_p_open_opp OR S.cnt_p_face_limpers > 0 OR S.flg_p_3bet_opp OR S.flg_p_4bet_opp) ) THEN 1 ELSE 0 END) AS ActionOpportunities \
        FROM	player AS P, cash_hand_player_statistics AS S, lookup_actions AS LA, cash_limit AS CL \
        WHERE	S.id_player = P.id_player AND \
	            LA.id_action = S.id_action_p AND \
	            CL.id_limit = S.id_limit AND \
	            S.id_gametype = 1 AND \
	            P.id_site = 100 AND \
	            P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_basic
    },
#endif

#if PT4_QUERY_SUPPORT__PFR
    // PT4 PFR
    {
        // name
        "pfr",
        // description_for_editor
        "PFR %",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN -1 ELSE (CAST (ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT	SUM(CASE WHEN S.cnt_p_raise > 0 THEN 1 ELSE 0 END) AS ActionCount, \
    	        SUM(CASE WHEN LA.action LIKE '__%' OR (LA.action LIKE '_' AND (S.amt_before > (CL.amt_bb + S.amt_ante)) AND (S.amt_p_raise_facing < (S.amt_before - (S.amt_blind + S.amt_ante))) AND (S.flg_p_open_opp OR S.cnt_p_face_limpers > 0 OR S.flg_p_3bet_opp OR S.flg_p_4bet_opp) ) THEN 1 ELSE 0 END) AS ActionOpportunities \
        FROM	player AS P, cash_hand_player_statistics AS S, lookup_actions AS LA, cash_limit AS CL \
        WHERE	S.id_player = P.id_player AND \
	            LA.id_action = S.id_action_p AND \
	            CL.id_limit = S.id_limit AND \
	            S.id_gametype = 1 AND \
	            P.id_site = 100 AND \
	            P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_basic
    },
#endif

#if PT4_QUERY_SUPPORT__WSSD
    // PT4 Won at Showdown
    {
        // name
        "wssd",
        // description_for_editor
        "WSSD %",
        // query
        "SELECT (CASE WHEN ActionOpportunities = 0 THEN -1 ELSE (CAST (ActionCount AS REAL) / ActionOpportunities) END) AS result \
        FROM( \
        SELECT 	SUM(CASE WHEN (s.flg_showdown AND s.flg_won_hand) THEN 1 ELSE 0 END) AS ActionCount, \
                SUM(CASE WHEN(s.flg_showdown) THEN 1 ELSE 0 END) AS ActionOpportunities \
        FROM	player as P, cash_hand_player_statistics AS S \
        WHERE	S.id_player = P.id_player AND \
                S.id_gametype = 1 AND \
                P.id_site = 100 AND \
                P.player_name LIKE '%SCREENNAME%' \
        ) foo",
        // stat_group
        pt_group_basic
    },
#endif

};
