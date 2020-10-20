file(REMOVE_RECURSE
  "kernel"
  "kernel.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang ASM C)
  include(CMakeFiles/kernel.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
