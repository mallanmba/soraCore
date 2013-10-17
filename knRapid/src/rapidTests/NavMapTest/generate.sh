IDLCOMMAND="rtiddsgen -replace -language C++ -namespace" # -convertToXml"

RAPIDTYPE="NavMap"
TESTTYPE="${RAPIDTYPE}Sample.idl"
DEPENDS="BaseTypes.idl Header.idl Message.idl ${RAPIDTYPE}Config.idl"


for FILE in ${DEPENDS}; do 
  echo "${IDLCOMMAND} ${FILE}"
  ${IDLCOMMAND} ${FILE}
done

#EXAMPLE="-example ${NDDSARCH}"

${IDLCOMMAND} ${EXAMPLE} ${TESTTYPE}

