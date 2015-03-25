FILE(REMOVE_RECURSE
  "CMakeFiles/translations"
  "keepassx-ja_JP.qm"
  "keepassx-zh_TW.qm"
  "keepassx-de.qm"
  "keepassx-zh_CN.qm"
  "keepassx_it.qm"
  "keepassx_en_plurals.qm"
  "keepassx_nl_NL.qm"
  "keepassx-bb_BK.qm"
  "keepassx-sv_SE.qm"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/translations.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
