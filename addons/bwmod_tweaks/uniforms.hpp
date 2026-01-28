    class Uniform_Base;
    class UniformItem;
    class BWA3_Uniform_Fleck: Uniform_Base {
        author = "$STR_BWA3_Author";
        scope = 2;
        displayName = "$STR_BWA3_UniformIDZFleckName";
        picture = "\bwa3_uniforms\ui\bwa3_uniform_fleck_x_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "BWA3_Uniform_Fleck";
            containerClass = "Supply80";
            mass = 40;
        };
    };
    class BWA3_Uniform_Tropen: BWA3_Uniform_Fleck {
        author = "$STR_BWA3_Author";
        displayName = "$STR_BWA3_UniformIDZTropenName";
        picture = "\bwa3_uniforms\ui\bwa3_uniform_tropen_x_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo: ItemInfo {
            uniformClass = "BWA3_Uniform_Tropen";
        };
    };
    class BWA3_Uniform_Multi: BWA3_Uniform_Fleck {
        author = "$STR_BWA3_Author";
        displayName = "$STR_BWA3_UniformIDZMultiName";
        picture = "\bwa3_uniforms\ui\bwa3_uniform_multi_x_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo: ItemInfo {
            uniformClass = "BWA3_Uniform_Multi";
        };
    };
    class BWA3_Uniform_tee_Fleck: Uniform_Base {
        author = "$STR_BWA3_Author";
        scope = 2;
        displayName = "$STR_BWA3_Uniform2IDZFleckName";
        picture = "\bwa3_uniforms\ui\bwa3_uniform_fleck_x_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "BWA3_Uniform_tee_Fleck";
            containerClass = "Supply80";
            mass = 20;
        };
    };
    class BWA3_Uniform_tee_Tropen: BWA3_Uniform_tee_Fleck {
        author = "$STR_BWA3_Author";
        displayName = "$STR_BWA3_Uniform2IDZTropenName";
        picture = "\bwa3_uniforms\ui\bwa3_uniform_tropen_x_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo: ItemInfo {
            uniformClass = "BWA3_Uniform_tee_Tropen";
        };
    };
    class BWA3_Uniform_tee_Multi: BWA3_Uniform_tee_Fleck {
        author = "$STR_BWA3_Author";
        displayName = "$STR_BWA3_Uniform2IDZMultiName";
        picture = "\bwa3_uniforms\ui\bwa3_uniform_multi_x_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo: ItemInfo {
            uniformClass = "BWA3_Uniform_tee_Multi";
        };
    };
    class BWA3_Uniform_sleeves_Fleck: Uniform_Base {
        author = "$STR_BWA3_Author";
        scope = 2;
        displayName = "$STR_BWA3_Uniform3IDZFleckName";
        picture = "\bwa3_uniforms\ui\bwa3_uniform_fleck_x_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "BWA3_Uniform_sleeves_Fleck";
            containerClass = "Supply80";
            mass = 40;
        };
    };
    class BWA3_Uniform_sleeves_Tropen: BWA3_Uniform_sleeves_Fleck {
        author = "$STR_BWA3_Author";
        displayName = "$STR_BWA3_Uniform3IDZTropenName";
        picture = "\bwa3_uniforms\ui\bwa3_uniform_tropen_x_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo: ItemInfo {
            uniformClass = "BWA3_Uniform_sleeves_Tropen";
        };
    };
    class BWA3_Uniform_sleeves_Multi: BWA3_Uniform_sleeves_Fleck {
        author = "$STR_BWA3_Author";
        displayName = "$STR_BWA3_Uniform3IDZMultiName";
        picture = "\bwa3_uniforms\ui\bwa3_uniform_multi_x_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo: ItemInfo {
            uniformClass = "BWA3_Uniform_sleeves_Multi";
        };
    };

    class BWA3_Uniform_Ghillie_Fleck: Uniform_Base {
        author = "$STR_BWA3_Author";
        scope = 2;
        displayName = "$STR_BWA3_UniformTarnIDZFleckName";
        picture = "\bwa3_uniforms\ui\bwa3_uniform_fleck_x_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "BWA3_Uniform_Ghillie_Fleck";
            containerClass = "Supply80";
            mass = 60;
        };
    };
    class BWA3_Uniform_Ghillie_Tropen: BWA3_Uniform_Ghillie_Fleck {
        author = "$STR_BWA3_Author";
        displayName = "$STR_BWA3_UniformTarnIDZTropenName";
        picture = "\bwa3_uniforms\ui\bwa3_uniform_tropen_x_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo: ItemInfo {
            uniformClass = "BWA3_Uniform_Ghillie_Tropen";
        };
    };
    class BWA3_Uniform_Ghillie_Multi: BWA3_Uniform_Ghillie_Fleck {
        author = "$STR_BWA3_Author";
        displayName = "$STR_BWA3_UniformTarnIDZMultiName";
        picture = "\bwa3_uniforms\ui\bwa3_uniform_multi_x_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo: ItemInfo {
            uniformClass = "BWA3_Uniform_Ghillie_Multi";
        };
    };

    // CREW UNIFORMS
    class BWA3_Uniform_Crew_Fleck: Uniform_Base {
        author = "$STR_BWA3_Author";
        scope = 2;
        displayName = "$STR_BWA3_UniformCrewFleckName";
        picture = "\bwa3_uniforms\ui\bwa3_uniform_crew_fleck_x_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "BWA3_Uniform_Crew_Fleck";
            containerClass = "Supply80";
            mass = 60;
        };
    };
    class BWA3_Uniform_Crew_Tropen: BWA3_Uniform_Crew_Fleck {
        author = "$STR_BWA3_Author";
        displayName = "$STR_BWA3_UniformCrewTropenName";
        picture = "\bwa3_uniforms\ui\bwa3_uniform_crew_tropen_x_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo: ItemInfo {
            uniformClass = "BWA3_Uniform_Crew_Tropen";
        };
    };
    class BWA3_Uniform_Crew_Multi: BWA3_Uniform_Crew_Fleck {
        author = "$STR_BWA3_Author";
        displayName = "$STR_BWA3_UniformCrewMultiName";
        picture = "\bwa3_uniforms\ui\bwa3_uniform_crew_multi_x_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo: ItemInfo {
            uniformClass = "BWA3_Uniform_Crew_Multi";
        };
    };

    // HELIPILOT UNIFORM
    class BWA3_Uniform_Helipilot: Uniform_Base {
        author = "$STR_BWA3_Author";
        scope = 2;
        displayName = "$STR_BWA3_UniformHelipilotName";
        picture = "\bwa3_uniforms\ui\bwa3_uniform_crew_pilot_x_ca.paa"; //@todo
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "BWA3_Uniform_Helipilot";
            containerClass = "Supply80";
            mass = 60;
        };
    };

    // ALTERNATIVE UNIFORMS
    class BWA3_Uniform2_Fleck: Uniform_Base {
        author = "$STR_BWA3_Author";
        scope = 2;
        displayName = "$STR_BWA3_UniformFleckName";
        picture = "\bwa3_uniforms\ui\bwa3_uniform_fleck_x_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "BWA3_Uniform2_Fleck";
            containerClass = "Supply80";
            mass = 40;
        };
    };
    class BWA3_Uniform2_Tropen: BWA3_Uniform2_Fleck {
        author = "$STR_BWA3_Author";
        displayName = "$STR_BWA3_UniformTropenName";
        picture = "\bwa3_uniforms\ui\bwa3_uniform_tropen_x_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo: ItemInfo {
            uniformClass = "BWA3_Uniform2_Tropen";
        };
    };
    class BWA3_Uniform2_Multi: BWA3_Uniform2_Fleck {
        author = "$STR_BWA3_Author";
        displayName = "$STR_BWA3_UniformMultiName";
        picture = "\bwa3_uniforms\ui\bwa3_uniform_multi_x_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo: ItemInfo {
            uniformClass = "BWA3_Uniform2_Multi";
        };
    };

    class BWA3_Uniform2_sleeves_Fleck: Uniform_Base {
        author = "$STR_BWA3_Author";
        scope = 2;
        displayName = "$STR_BWA3_Uniform2FleckName";
        picture = "\bwa3_uniforms\ui\bwa3_uniform_fleck_x_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "BWA3_Uniform2_sleeves_Fleck";
            containerClass = "Supply80";
            mass = 40;
        };
    };
    class BWA3_Uniform2_sleeves_Tropen: BWA3_Uniform2_sleeves_Fleck {
        author = "$STR_BWA3_Author";
        displayName = "$STR_BWA3_Uniform2TropenName";
        picture = "\bwa3_uniforms\ui\bwa3_uniform_tropen_x_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo: ItemInfo {
            uniformClass = "BWA3_Uniform2_sleeves_Tropen";
        };
    };
    class BWA3_Uniform2_sleeves_Multi: BWA3_Uniform2_sleeves_Fleck {
        author = "$STR_BWA3_Author";
        displayName = "$STR_BWA3_Uniform2MultiName";
        picture = "\bwa3_uniforms\ui\bwa3_uniform_multi_x_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo: ItemInfo {
            uniformClass = "BWA3_Uniform2_sleeves_Multi";
        };
    };

    class BWA3_Uniform2_Ghillie_Fleck: Uniform_Base {
        author = "$STR_BWA3_Author";
        scope = 2;
        displayName = "$STR_BWA3_UniformTarnFleckName";
        picture = "\bwa3_uniforms\ui\bwa3_uniform_fleck_x_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "BWA3_Uniform2_Ghillie_Fleck";
            containerClass = "Supply80";
            mass = 60;
        };
    };
    class BWA3_Uniform2_Ghillie_Tropen: BWA3_Uniform2_Ghillie_Fleck {
        author = "$STR_BWA3_Author";
        displayName = "$STR_BWA3_UniformTarnTropenName";
        picture = "\bwa3_uniforms\ui\bwa3_uniform_tropen_x_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo: ItemInfo {
            uniformClass = "BWA3_Uniform2_Ghillie_Tropen";
        };
    };
    class BWA3_Uniform2_Ghillie_Multi: BWA3_Uniform2_Ghillie_Fleck {
        author = "$STR_BWA3_Author";
        displayName = "$STR_BWA3_UniformTarnMultiName";
        picture = "\bwa3_uniforms\ui\bwa3_uniform_multi_x_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo: ItemInfo {
            uniformClass = "BWA3_Uniform2_Ghillie_Multi";
        };
    };
    // Crye G3 UNIFORMS
    class BWA3_Uniform_Crye_G3_Fleck: Uniform_Base {
        author = "$STR_BWA3_Author";
        scope = 2;
        displayName = "$STR_BWA3_UniformCryeG3FleckName";
        picture = "\bwa3_uniforms\ui\bwa3_uniform_crye_fleck_x_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "BWA3_Uniform_Crye_G3_Fleck";
            containerClass = "Supply80";
            mass = 60;
        };
    };
    class BWA3_Uniform_Crye_G3_Tropen: BWA3_Uniform_Crye_G3_Fleck {
        author = "$STR_BWA3_Author";
        displayName = "$STR_BWA3_UniformCryeG3TropenName";
        picture = "\bwa3_uniforms\ui\bwa3_uniform_crye_tropen_x_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo: ItemInfo {
            uniformClass = "BWA3_Uniform_Crye_G3_Tropen";
        };
    };
    class BWA3_Uniform_Crye_G3_Multi: BWA3_Uniform_Crye_G3_Fleck {
        author = "$STR_BWA3_Author";
        displayName = "$STR_BWA3_UniformCryeG3MultiName";
        picture = "\bwa3_uniforms\ui\bwa3_uniform_crye_multi_x_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo: ItemInfo {
            uniformClass = "BWA3_Uniform_Crye_G3_Multi";
        };
    };
