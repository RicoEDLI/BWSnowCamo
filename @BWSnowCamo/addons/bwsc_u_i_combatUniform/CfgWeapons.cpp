
class U_I_CombatUniform;
class UniformItem;

class u_b_bwsc_combatUniform_02 : U_I_CombatUniform
{
    scope = 2;
    displayName = "$STR_bwsc_u_i_combatUniform_ConfigTitle_combatUniform";
    picture = "\bwsc_u_i_combatUniform\data\ui\icons\icon.paa";
    hiddenSelectionsTextures[] = {
        "\bwsc_u_i_combatUniform\data\combatUniform_co.paa"
    };
    class ItemInfo : UniformItem
    {
        uniformClass = "bwsc_combatUniform_02";
        containerClass = "Supply50";
        mass = 50;
    };
};
