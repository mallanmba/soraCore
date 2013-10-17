IDLCOMMAND="rtiddsgen -language C++ -namespace -convertToXml"

EXAMPLE="PointCloudSample.idl"
DEPENDS="BaseTypes.idl Header.idl Message.idl PointCloudConfig.idl"


for FILE in ${DEPENDS}; do 
  echo "${IDLCOMMAND} ${FILE}"
  ${IDLCOMMAND} ${FILE}
done

#${IDLCOMMAND} -example i86Linux2.6gcc4.1.2 ${EXAMPLE}
${IDLCOMMAND} ${EXAMPLE}

