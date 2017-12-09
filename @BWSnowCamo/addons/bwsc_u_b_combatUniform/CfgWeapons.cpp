
class UniformItem;
class U_B_CombatUniform_mcam;
class U_B_CombatUniform_mcam_tshirt;
class U_B_CombatUniform_mcam_vest;

class u_b_bwsc_combatUniform_01 : U_B_CombatUniform_mcam
{
    scope = 2;
    displayName = "$STR_bwsc_u_b_combatUniform_ConfigTitle_combatUniform";
    picture = "\bwsc_u_b_combatUniform\data\ui\icons\combatUniform.paa";
    hiddenSelectionsTextures[] = {
        "\bwsc_u_b_combatUniform\data\combatUniform_co.paa"
    };
    class ItemInfo : UniformItem
    {
        uniformClass = "bwsc_soldier_01";
        containerClass = "Supply50";
        mass = 50;
    };
};

class u_b_bwsc_combatUniform_01_tshirt : U_B_CombatUniform_mcam_tshirt
{
    scope = 2;
    displayName = "$STR_bwsc_u_b_combatUniform_ConfigTitle_combatUniform_tshirt";
    picture = "\bwsc_u_b_combatUniform\data\ui\icons\combatUniform.paa";
    hiddenSelectionsTextures[] = {
        "\bwsc_u_b_combatUniform\data\combatUniform_co.paa"
    };
    class ItemInfo : UniformItem
    {
        uniformClass = "bwsc_soldier_01_tshirt";
        containerClass = "Supply50";
        mass = 50;
    };
};

class u_b_bwsc_combatUniform_01_sleeves : U_B_CombatUniform_mcam_vest
{
    scope = 2;
    displayName = "$STR_bwsc_u_b_combatUniform_ConfigTitle_combatUniform_sleeves";
    picture = "\bwsc_u_b_combatUniform\data\ui\icons\combatUniform.paa";
    hiddenSelectionsTextures[] = {
        "\bwsc_u_b_combatUniform\data\combatUniform_co.paa"
    };
    class ItemInfo : UniformItem
    {
        uniformClass = "bwsc_soldier_01_sleeves";
        containerClass = "Supply50";
        mass = 50;
    };
};
