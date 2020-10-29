file(REMOVE_RECURSE
  "bootblock.o"
  "bootblock.o.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang ASM C)
  include(CMakeFiles/bootblock.o.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
